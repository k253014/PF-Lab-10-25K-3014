#include<stdio.h>
#include<string.h>
int main(){
	
	char name[4][25], course[4][8][15];
	int i, j, course_num[4];
	
	for(i=0; i<4; i++){
		
		printf("Enter student %d name:\n", i+1);
		scanf("%s", name[i]);
		
		printf("How many courses student %d want to register:\n", i+1);
		scanf("%d", &course_num[i]);
		
		for(j=0; j<course_num[i]; j++){
			printf("Enter course %d for student %d:\n", j+1, i+1);
			scanf("%s", course[i][j]);
		}	
	}
	
	printf("\nStudent details:\n\n");
	printf("Name\tCourses\n");
	for(i=0; i<4; i++){
		printf("%s", name[i]);
		
		for(j=0; j<course_num[i]; j++){
			printf("\t%s\n", course[i][j]);
		}
	}
	
	printf("\nStudents taking Physics:\n");
	for(i=0; i<4; i++){
		for(j=0; j<course_num[i]; j++){
			if(strcmp(course[i][j], "AP") == 0){
				printf("%s\n", name[i]);
				break;
			}
		}
	}
	
	printf("\nStudents registered for more than 3 courses:\n");
	for(i=0; i<4; i++){
		if(course_num[i] > 3){
			printf("%s\n", name[i]);
		}
	}
	return 0;
}
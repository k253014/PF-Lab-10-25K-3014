#include <stdio.h>
#include<string.h>
void clearInputBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void displayList(char names[][50], int marks[], int size) {
    printf("\nName                Marks\n");
    printf("--------------------\n");

    for (int i = 0; i < size; i++) {
        printf("%-20s %d\n", names[i], marks[i]);
    }
}

void calculateClassAverage(int marks[], int size) {
    printf("--------------------\n");

    float avg = 0;
    for(int i=0;i<size;i++) {
        avg += marks[i];
    }
    avg /= size;
    printf("Average of class: %.2f\n", avg);

}

void findTopStudent(char names[][50], int marks[], int size) {
    int max = marks[0];
    int max_index = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
            max_index = i;
        }
        
    }
    printf("--------------------\n");
    printf("Highest Scorer: %s with %d marks\n", names[max_index], max);
    printf("--------------------\n");
}

void updateList(int marks[],char names[][50], int size) {
    printf("--------------------\n");
    for(int i=0;i<size;i++) {
        printf("Enter student name: ");
        fgets(names[i], 50, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
        clearInputBuffer();

    }
    printf("--------------------\n");
}
int main() {
    int size;
    printf("--------------------\n");
    printf("Enter number of Students: ");
    scanf("%d", &size);
    clearInputBuffer();
    char names[size][50];
    int marks[size];

    updateList(marks,names,size);
    displayList(names,marks,size);
    findTopStudent(names,marks,size);
    calculateClassAverage(marks, size);

    
}
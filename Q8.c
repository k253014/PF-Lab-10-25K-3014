#include<stdio.h>

int main(){
	
	char menu[3][15] = {"Starter", "Main Dishes", "Desserts"};
	
	char items[3][3][15] = { {"Salad", "Garlic Bread", "Samosas"},
						  {"Karahi", "Tikka", "Biryani"},
						  {"Shake", "Ice cream", "Tea"} };
						  
	int prices[3][3] = { {5, 6, 11},
						 {15, 20, 25},
						 {9, 5, 8} };
						 
	int i, j;
	
	printf("Menu categories:\n");

	for(i=0; i<3; i++){
		printf("%s:\n", menu[i]);
		for(j=0; j<3; j++){
			printf("%-12s $%d\n", items[i][j], prices[i][j]);
		}
		printf("\n");
	}
	
	printf("Items less than $10:\n");
	for(i=0; i<3; i++){
		printf("%s:\n", menu[i]);
		for(j=0; j<3; j++){
			if(prices[i][j] < 10){
				printf("%-12s $%d\n", items[i][j], prices[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
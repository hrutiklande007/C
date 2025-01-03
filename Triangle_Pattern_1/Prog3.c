
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	char ch = 'A';

	for(int i = 1; i<=rows ; i++){

		char val = ch;

		for(int j = 1; j<= i ; j++){
		
			printf("%c  ",val++);
		}
		ch++;
		printf("\n");
	
	}
}

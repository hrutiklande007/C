#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	char ch = 'A';

	for(int i = 0 ; i<rows ; i++){
	
		for(int j = 0 ; j<rows ; j++){
		
			printf("%c\t",ch++);
		}
		printf("\n\n");
	}
}

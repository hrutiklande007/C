

#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	

	for(int i = 0 ; i<rows ; i++){
	
		char ch = 'A';
		for(int j = 0 ; j<rows ; j++){
		
			printf("%c\t",ch++);
		}
		printf("\n");
	}
}

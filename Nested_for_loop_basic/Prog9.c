

#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);



	for(int i = 0 ; i<rows ; i++){

		char ch = 'a';	
		for(int j = 0 ; j<rows ; j++){
		
			printf("%c1\t",ch++);
		}
		printf("\n");
	}
}

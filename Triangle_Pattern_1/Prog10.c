
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	for(int i = 1; i<=rows ; i++){
	
		int ch = 64+rows;

		for(int j = 1; j<= rows-i+1 ; j++){
		
			printf("%c  ",ch--);
		}
		printf("\n");
	
	}
}

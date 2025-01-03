
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	
	for(int i = 1; i<=rows ; i++){
	
		int N = rows;

		for(int j = 1; j<= i ; j++){
		
			printf("%d  ",N--);
		}
		printf("\n");
	
	}
}

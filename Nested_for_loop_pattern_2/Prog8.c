
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);


	for(int i = 1 ; i<=rows ; i++){
	
		int num = 1;

		for(int j = 1 ; j<=rows ; j++){
	
			printf("A%d\t",num++);		

		}
		
		printf("\n\n");
	}
}

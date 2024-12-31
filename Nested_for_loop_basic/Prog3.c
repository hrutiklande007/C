

#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	

	for(int i = 0 ; i<rows ; i++){
	
		int num = 1;

		for(int j = 0 ; j<rows ; j++){
		
			printf("%d\t",num++);
		}
		printf("\n");
	}
}

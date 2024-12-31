

#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	int num = 1;

	for(int i = 0 ; i<rows ; i++){
	
		for(int j = 0 ; j<rows ; j++){
		
			printf("%d\t",num);
		}
		num++;
		printf("\n");
	}
}

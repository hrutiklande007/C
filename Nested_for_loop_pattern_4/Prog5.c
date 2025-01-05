
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	int num = 1;

	for(int i = 1 ; i<=rows ; i++){
	
		for(int j = 1 ; j<=rows ; j++){
		
			printf("%d\t",num*j);
		}
		num = num+rows;
		printf("\n\n");
	}
}

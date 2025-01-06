
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	int num = rows;

	for(int i = 1 ; i<=rows ; i++){
	
		for(int sp = 1 ; sp<i ; sp++){
		
			printf("\t");
		}

		for(int  j = 1 ; j<=rows-i+1 ; j++){
		
			printf("%d\t",num);

		}
		num--;
		printf("\n\n");
	}
}

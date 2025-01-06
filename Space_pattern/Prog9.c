

#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	int ch = 64+rows;

	for(int i = 1 ; i<=rows ; i++){
	
		for(int sp = 1 ; sp<i ; sp++){
		
			printf("\t");
		}

		int num = ch;

		for(int  j = 1 ; j<=rows-i+1 ; j++){
		
			printf("%c\t",num--);

		}

		printf("\n\n");
	}
}

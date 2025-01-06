
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	int ch = 64 + rows;

	for(int i = 1 ; i<=rows ; i++){
	
		for(int sp = 1 ; sp<=rows-i ; sp++){
		
			printf("\t");

		}

		int num = ch;

		for(int  j = 1 ; j<=i ; j++){
		
			printf("%c\t",num++);

		}
		ch--;

		printf("\n\n");
	}
}

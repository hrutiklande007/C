
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	int key = 64+rows;

	for(int i = 0 ; i<rows ; i++){
	
		for(int j = 0 ; j<rows ; j++){
		
			printf("%c\t",key);
		}
		key--;
		printf("\n\n");
	}
}

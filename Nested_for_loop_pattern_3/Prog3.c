

#include<stdio.h>

void main(){

	int rows;
	
	printf("Enter the rows : ");
	scanf("%d",&rows);

	int num = 1;

	for(int i = 1; i<=rows ; i++){
	
		int N = num;

		for(int j = 1 ; j<= rows ;j++){	

			printf("%d  ",N);
			N++;
		
		}
		num++;
		printf("\n");
	}

	
}


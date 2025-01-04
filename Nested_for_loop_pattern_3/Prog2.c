

#include<stdio.h>

void main(){

	int rows;
	
	printf("Enter the rows : ");
	scanf("%d",&rows);

	int num = 1;

	for(int i = 1; i<=rows ; i++){

		int ch = 64+rows;
	

		for(int j = 1 ; j<= rows ;j++){	
	
			if(j%2!=0){	

				printf("%c  ",ch);
				ch--;
			}else{
			
				printf("%d  ",num);
			}
		}
		num++;
		printf("\n");
	}

	
}




#include<stdio.h>

void main(){

	int rows;
	
	printf("Enter the rows : ");
	scanf("%d",&rows);

	int ch = 96+rows;

	for(int i = 1; i<=rows ; i++){
	
		for(int j = 1 ; j<= rows ;j++){	
	
			if(i%2!=0){
				printf("%c ",ch);
				ch++;
			}else{
			
				printf("%c ",ch--);
			}
		}
		printf("\n");
	}

	
}


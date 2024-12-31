#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	for(int i = 0; i<rows ; i++){
	
		for(int j = 0 ; j<rows ; j++){
		
			if(i%2==0){
			
				printf("*\t");
			}else{
			
				printf("#\t");
			}
		}
		printf("\n\n");
	}
}

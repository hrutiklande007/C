	
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);



	for(int i = 1 ; i<=rows ; i++){
	
		for(int j = 1 ; j<=rows ; j++){
		
			if(j%2!=0 ){
				printf("*\t");
			}else{
			
				printf("#\t");
			}
		}
		
		printf("\n\n");
	}
}

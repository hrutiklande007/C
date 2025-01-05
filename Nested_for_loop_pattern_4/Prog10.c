
#include<stdio.h>
void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);


	for(int i = 1; i<=rows ; i++){
	

		for(int  j = 1 ; j<= rows  ; j++){
		
			if(i==1 || i==rows){

				if(j==1 || j==rows){
					printf("1\t");
					
				}else{
			
					printf("0\t");
					
				}
			}else{

				if(j==1 || j==rows){
					printf("0\t");
				}else{
			
					printf("1\t");
					
				}
			}	
		}
		printf("\n\n");
	}
}

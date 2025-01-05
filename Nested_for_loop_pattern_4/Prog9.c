#include<stdio.h>
void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	int ch = 64;

	for(int i = 1; i<=rows ; i++){
	
		int val = ch;

		for(int  j = 1 ; j<= rows  ; j++){
		
			if(i%2==1){

				if(j%2==0){
					printf("%c\t",val+j);
					
				}else{
			
					printf("%d\t",val+j-64);
					
				}
			}else{

			

				
				if(j%2==0){
					printf("%d\t",val+j-64);
				}else{
			
					printf("%c\t",val+j);
					
				}
			

			}
			
		}
		ch++;
		printf("\n\n");
	}
}

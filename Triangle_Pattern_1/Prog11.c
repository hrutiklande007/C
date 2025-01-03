
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	for(int i = 1; i<=rows ; i++){
	
		int ch = 65+i-1;

		for(int j = 1; j<= rows-i+1 ; j++){
		
			if(rows%2==0){
			
				if(ch%2!=0){
					
					printf("%d  ",ch++);
				}else{
				
					printf("%c  ",ch++);
				}
			}else{
			
				if(ch%2!=0){
					
					printf("%c  ",ch++);
				}else{
				
					printf("%d  ",ch++);
				}

			}
		}
		printf("\n");
	
	}
}

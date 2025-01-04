

#include<stdio.h>

void main(){

	int rows;
	
	printf("Enter the rows : ");
	scanf("%d",&rows);


	for(int i = 1; i<=rows ; i++){
	
		int ch = 65;

		for(int j = 1 ; j<= rows ;j++){	
			
			if(rows%2==0){
				if(j%2!=0){

					printf("%d  ",ch);
					ch++;
				}else{
				
					printf("%c  ",ch);
					ch++;
				}
			}else{
			
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}

	
}


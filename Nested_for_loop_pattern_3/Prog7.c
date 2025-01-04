

#include<stdio.h>

void main(){

	int rows;
	
	printf("Enter the rows : ");
	scanf("%d",&rows);

	int ch = 64+(rows*rows);

	int num = rows*rows;

	for(int i = 1; i<=rows ; i++){
	

		for(int j = 1 ; j<= rows ;j++){	
		
		
			if(j%2==0){
				printf("%d ",num);
				num--;
				ch--;
			}else{
			
				printf("%c ",ch);
				num--;
				ch--;
			}
		}
		printf("\n");
	}

	
}


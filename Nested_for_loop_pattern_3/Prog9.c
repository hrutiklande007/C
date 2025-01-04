

#include<stdio.h>

void main(){

	int rows;
	
	printf("Enter the rows : ");
	scanf("%d",&rows);

	int small = 96+rows;
	int bold = 65+rows;

	for(int i = 1; i<=rows ; i++){
	
		for(int j = 1 ; j<= rows ;j++){	
	
			if(i%2!=0 ){
		
				if(j%2!=0){
				
					printf("%c ",bold);
					bold = bold+3;
				}else{
				
					printf("%c ",small++);
				}
			}else{
			
				if(j%2==0){
				
					printf("%c ",bold);
					bold = bold+3;
				}else{
				
					printf("%c ",small++);
			
				}
			}
		}
		bold = bold - 3;
		printf("\n");
	}

	
}


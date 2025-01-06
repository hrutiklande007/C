

#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	for(int i = 1 ; i<=rows ; i++){
	
		for(int sp = 1 ; sp<i ; sp++){
		
			printf("\t");
		}

		int num = 64+i;

		for(int  j = 1 ; j<=rows-i+1 ; j++){
		
			if(rows%2==1){
				if(num%2==0){
					printf("%d\t",num++);
				}else{
				
					printf("%c\t",num++);
				}
			}else{
			
				if(num%2==1){
					printf("%d\t",num++);
				}else{
				
					printf("%c\t",num++);
				}

			}
		}

		printf("\n\n");
	}
}

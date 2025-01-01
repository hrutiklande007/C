
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	
	for(int i = 1 ; i<=rows ; i++){
	
		char ch1 = 'A';
		char ch2 = 'a';

		for(int j = 1 ; j<=rows ; j++){
		
			if(i%2!=0 ){
				printf("%c\t",ch1++);
				
			}else{
			
				printf("%c\t",ch2++);
				
			}
		}
		
		printf("\n\n");
	}
}

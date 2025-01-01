
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	for(int i = 1 ; i<=rows ; i++){
	
		int  num = 1;
		char ch = 'A';

		for(int j = 1 ; j<=rows ; j++){
		
			if(j%2!=0 ){
				printf("%d\t",num++);
				ch++;
				
			}else{
			
				printf("%c\t",ch++);
				num++;
			}
		}
		
		printf("\n\n");
	}
}

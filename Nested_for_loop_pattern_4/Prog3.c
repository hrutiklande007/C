
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	int num = 1;

	for(int i = 1 ; i<=rows ; i++){
	
		for(int j = 1 ; j<=rows ; j++){
		
			printf("%d  ",num);
			num++;
			if(num>=10){
			
				num = 1;
			}
		}
		printf("\n");
	}
}

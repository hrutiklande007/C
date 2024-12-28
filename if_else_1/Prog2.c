#include<stdio.h>

void main(){
	
	int num ;

	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");

	if(num%5==0 || num%10==0){
		printf("Number id divisible\n");
	}else{
		printf("Number id not divisible\n");
	}
}

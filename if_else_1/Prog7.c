#include<stdio.h>

void main(){


	int num1 ;

	int num2;

	printf("Enter the first number : \n");
	scanf("%d",&num1);
	
	printf("Enter the second number : \n");
	scanf("%d",&num2);

	if(num1>num2){
	
		printf("%d is greater in %d and %d \n",num1,num2,num1);
	}else{
		printf("%d is greater in %d and %d \n",num2,num1,num2);
	}
	
	
}

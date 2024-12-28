#include<stdio.h>

void main(){

	int num1;
	int num2;

	printf("Enter the first number : ");
	scanf("%d",&num1);

	printf("Enter  second number : ");
	scanf("%d",&num2);

	if(num1>num2){
	
		printf("%d is greater in %d and %d \n",num1 , num2, num1);
	}
	else if(num1<num2){
	
		printf("%d is greater in %d and %d \n",num2 , num1, num2);
	}
	else{
	
		printf("Both the numbers are same \n");
	}



}

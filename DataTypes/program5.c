#include<stdio.h>
void main(){
	int num1 = 10;
	int num2 = 20;
	printf("Before swapping: %d \n",num1);
	printf("Before swapping: %d \n",num2);

	int temp;
	temp=num1;
	num1=num2;
	num2=temp;

	printf("After swapping: %d \n", num1);
	printf("After swapping: %d \n", num2);
}


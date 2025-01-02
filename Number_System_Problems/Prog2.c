
#include<stdio.h>

void main(){

	int num;

	printf("Enter the Number : ");
	scanf("%d",&num);


	int fact = 1;

	printf("Factorial of %d is : ",num);
	for(int i = 1; i<=num ; i++){
	
		fact = fact * i;
		

	}
	printf("%d\n",fact);
}

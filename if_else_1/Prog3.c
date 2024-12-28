#include<stdio.h>

void main(){
	
	int num ;

	scanf("%d",&num);
	printf("\n");

	if(num%7==0 && num>21){
	
		printf("Number is divisible by 7 and greater then 21.\n");
	} else if(num%7==0 && num<21){
	
		printf("Number is divisible by 7 and less then 21.\n");

	}else{
		printf("Number is not divisible by 7\n");
	}
}

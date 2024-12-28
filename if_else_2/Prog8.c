#include<stdio.h>

void main(){

	int per;

	printf("Enter the percentage : ");
	scanf("%d",&per);

	if(per>=75){
	
		printf("First Class with Distinction.\n");
	}
	else if(per>=60){
	
		printf("First Class.\n");
	}
	else if(per>=54){
	
		printf("Second Class .\n");
	}
	else if(per>=47){
	
		printf("Pass.\n");
	}
	else{
	
		printf("Fail.\n");
	}
}

#include<stdio.h>

void main(){

	int num;

	printf("Enter the count for the day : \n");
	scanf("%d",&num);

	if(num==1){
	
		printf("Monday.\n");
	}
	else if(num==2){
	
		printf("Tusday.\n");
	}
	else if(num==3){
	
		printf("Wednusday.\n");
	}
	else if(num==4){
	
		printf("Thrusday.\n");
	}
	else if(num==5){
	
		printf("Friday.\n");
	}
	else if(num==6){
	
		printf("Saterday.\n");
	}else if(num==7){
	
		printf("Sunday.\n");
	}else{
	
		printf("Invalid \n");


	}
}

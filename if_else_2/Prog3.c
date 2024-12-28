#include<stdio.h>

void main(){

	int year;

	printf("Enter the year : ");
	scanf("%d",&year);

	if(year%4==0){
	
		printf("Leap Year.\n");
	}else{
	
		printf("Not a Leap Year.\n");
	}
}

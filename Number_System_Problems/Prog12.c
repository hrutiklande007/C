

#include<stdio.h>

void main(){

	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);

	int rem = 0;
	int N = num;

	int count = 0;
	while(N>0){

		count++;
	        N = N/10;	

	}
	int val = 10^count;
}

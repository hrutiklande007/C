

#include<stdio.h>

void main(){

	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);

	int N = num;
	int rem = 0;
	int count = 0;

	while(N>0){
	
		N%10;
		count++;
		N = N/10;

	}
	printf("Count of digits in %d is %d.\n",num,count);
	

}

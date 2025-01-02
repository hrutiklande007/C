
#include<stdio.h>

void main(){

	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);

	int N = num;
	int rem = 0;
	while(N>0){
	
		rem = rem*10 + (N%10);
		
		N = N/10;

	}
	printf("Reverse of %d is %d.\n",num,rem);
	

}

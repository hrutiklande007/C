
#include<stdio.h>

void main(){

	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);

	int  N = num;

	int rem = 0;

	int sum = 0;

	
	while(N>0){
	
		rem  = N%10;
		int fact = 1;
		for(int i = 1; i<=rem ; i++){
	
			fact = fact*i;
		}
		sum = sum+fact;
		N = N/10;
	}

	if(num == sum){
	
		printf("%d is a strong number.\n",num);
	}else{
	
		printf("%d is not a strong number.\n",num);
	}
}

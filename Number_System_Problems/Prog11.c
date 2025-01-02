

#include<stdio.h>

void main(){

	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);

	int sum = 0;

	for(int i =1; i<num ; i++){
	
		if(num%i==0){
		
			sum = sum +i;
		}
	}	
	if(sum > num ){
	
		printf("%d is a Abundant Number.\n",num);
	}else{
	
		printf("%d is not a Abundant number.\n",num);
	}

}


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
	if(num > sum ){
	
		printf("%d is a deficient Number.\n",num);
	}else{
	
		printf("%d is not a deficient number.\n",num);
	}

}

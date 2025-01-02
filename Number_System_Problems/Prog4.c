

#include<stdio.h>

void main(){

	int num;

	printf("Enter the Number : ");
	scanf("%d",&num);

	int count = 0;
	for(int i = 1; i<=num ; i++){
	
		if(num%i==0){
		
			count++;
		}

	}
	if(count > 2){
		printf("%d is a Composite number.\n",num);
	}else{
	
		printf("%d is not a Composite number.\n",num);
	}

}


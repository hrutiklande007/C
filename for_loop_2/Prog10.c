


#include<stdio.h>

void main(){

	int num; 

	printf("Enter the number : ");
	scanf("%d",&num);


	int count1 = 0;

	int count2 = 0;

	for(int i = 1 ; i<=10 ; i++){

	
		if(num%i==0){

			count1++;
			
		}else{
			count2++;
		}
	}

	if(count1>=3){
	
	
		printf("Composite Number.\n");
	}else{
	
		printf("Not a Composite Number.\n");
	}
}

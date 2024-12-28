
#include<stdio.h>

void main(){

	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	int count=0;

	for(int i = 2; i<=10 ; i++){
	
		if(num%i==0){
		
			count++;
			
		}
	}

	printf("%d\n",count);
}

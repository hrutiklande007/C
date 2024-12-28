#include<stdio.h>

void main(){

	int num ;

	printf("Enter the number : \n");
	scanf("%d",&num);

	if(num>=1 && num<=1000){
	
		printf("%d is in range 1 to 1000\n",num);
	}else{
	
		printf("%d is not in the range 1 to 1000\n",num);
	}
}

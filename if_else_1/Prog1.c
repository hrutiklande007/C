#include<stdio.h>

void main(){
	
	int n ;

	scanf("%d",&n);

	if(n==0){
		printf("%d is considered as neutral\n",n);
	}else if(n>0){
		printf("%d is positive\n",n);
	}else{
		printf("%d is negative \n", n);
	}
	
}

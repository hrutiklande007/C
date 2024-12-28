#include<stdio.h>

void main(){

	int s;
	int e;

	printf("Start : ");
	scanf("%d",&s);

	printf("End : ");
	scanf("%d",&e);

	for (int i = s ; i<=e ; i++){
	
		if(i%2==0){
		
			printf("%d \n",i);
		}
	}
}

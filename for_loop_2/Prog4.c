
#include<stdio.h>

void main(){

	int S;
	int E;

	printf("Start : ");
	scanf("%d",&S);

	printf("End : ");
	scanf("%d",&E);

	int sum = 0;

	for(int i = S ; i<=E ; i++){
	
		sum = sum+ i;
	}

	printf("Sum = %d\n",sum);
}

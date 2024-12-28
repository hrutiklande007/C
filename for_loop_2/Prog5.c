

#include<stdio.h>

void main(){

	int S;
	int E;

	printf("Start : ");
	scanf("%d",&S);

	printf("End : ");
	scanf("%d",&E);

	int Mult = 1;

	for(int i = S ; i<=E ; i++){

		if(i%2==0){

			Mult = Mult * i;
		}
	}

	printf("Multiplication = %d\n",Mult);
}

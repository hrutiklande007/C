

#include<stdio.h>

void main(){

	int S;
	int E;

	printf("Start : ");
	scanf("%d",&S);

	printf("End : ");
	scanf("%d",&E);



	for(int i = S ; i<=E ; i++){
	
		if(i%2 != 0 ){
			printf("Cube of %d is %d\n",i,i*i*i);
		}
	}

}

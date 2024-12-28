#include<stdio.h>

void main(){

	int num;

	printf("Table for : ");
	scanf("%d",&num);

	for(int i = 1 ; i<=10 ; i++){
	
		printf("%d\n",i*num );
	}
}

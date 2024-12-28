#include<stdio.h>

void main(){

	int units;

	printf("Enter the units : ");
	scanf("%d",&units);

	int cost;

	if(units<100){
	
		cost= units*5;
		printf("Cost is %d\n",cost);
	}
	else if(units<200){
	
		cost= units*7;
		printf("Cost is %d\n",cost);
	}
	else{
	
		cost= units*5;
		printf("Cost is %d\n",cost);
	}



}

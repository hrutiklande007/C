#include<stdio.h>

void main(){

	int sp;
	int cp;

	printf("Enter the SP : ");
	scanf("%d",&sp);

	printf("Enter the CP : ");
	scanf("%d",&cp);

	int cost;

	if(sp>cp){
		cost = sp-cp;
		printf("Profit = %d\n",cost);
	}
	else if(sp<cp){
		cost = cp-sp;
		printf("Loss = %d\n",cost);
	}
	if(sp==cp){
		printf("No Profit No Loss\n");
	}


}

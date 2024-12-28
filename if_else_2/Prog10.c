#include<stdio.h>

void main(){

	int pack;

	printf("Enter the required package : ");
	scanf("%d",&pack);

	if(pack>15){
	
		printf("OOP, Advenced DSA, SQL.\n");
	}else if(pack>8){
	
		printf("OOP, Basic DSA.\n");
	}else{
	
		printf("OOP.\n");
	}
}

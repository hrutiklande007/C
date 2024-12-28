#include<stdio.h>

void main(){

	int per;

	printf("Enter the percentage : ");
	scanf("%d",&per);

	if(per>85){

		printf("Engineering.\n");
	

	}else if(per>75){
	
		printf("Medical.\n");
	}else {
	
		printf("Pharmacy.\n");
	}
}

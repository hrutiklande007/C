
#include<stdio.h>

void main(){

	int size;

	printf("Enter the size fo array : ");
	scanf("%d",&size);

	float arr[size];

	printf("Enter the heights : \n");

	for(int i = 0 ; i<size ; i++){
	
		scanf("%f",&arr[i]);
		if(arr[i]<5.5 || arr[i]>6){
		
			printf("Height shall not be greater than 6ft and less than 5.5ft.\n");
			scanf("%f",&arr[i]);
		}

	}

	printf("Valid Heights : \n");

	for(int i = 0 ; i<size ; i++){

			printf("%f\n",arr[i]);

	}

	printf("\n");

}


#include<stdio.h>

void main(){

	int size;

	printf("Enter the size fo array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the child age : \n");

	int num;
	for(int i = 0 ; i<size ; i++){
	
		scanf("%d",&num);
		if(num<=5){
			arr[i] = num;
		}else{
	
			printf("Age should not be grater than 5. Re-enter the age.\n");
			i--;
		}

	}

	printf("-------------------\n");

	for(int i = 0 ; i<size ; i++){

		printf("%d ",arr[i]);
	
	}

	printf("\n");

}

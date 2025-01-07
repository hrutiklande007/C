#include<stdio.h>

void main(){

	int size;

	printf("Enter the size fo array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array elements : \n");

	int num;
	for(int i = 0 ; i<size ; i++){
	
		scanf("%d",&num);
		arr[i] = num;

	}

	printf("Even index elements : ");

	for(int i = 0 ; i<size ; i++){

		if(i%2==0){

			printf("%d ",arr[i]);
		}

	}

	printf("\n");

}


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

	printf("Sum of square of all elements : ");

	int sum = 0;

	for(int i = 0 ; i<size ; i++){

		sum = sum+(arr[i]*arr[i]);
	}

	printf("%d\n",sum);

}

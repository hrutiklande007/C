
#include<stdio.h>

void main(){

	int size;

	printf("Enter the size fo array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the ids : \n");

	int num;
	for(int i = 0 ; i<size ; i++){
	
		scanf("%d",&num);
		arr[i] = num;

	}

	printf("Enter id to search : ");
	int id;
	scanf("%d",&id);

	for(int i = 0 ; i<size ; i++){

		if(arr[i]==id){

			printf("Id %d found at index %d",id,i);
		}

	}

	printf("\n");

}

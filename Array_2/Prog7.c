

#include<stdio.h>

void main(){

	int size;

	printf("Enter the size fo array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements : \n");

	for(int i = 0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);

	}

	printf("----------------\n");

	for(int i = 0 ; i<size ; i++){

		if(arr[i]%2==0){
			printf("%d\n",arr[i]*arr[i]);
		}else{
		
			printf("%d\n",arr[i]*arr[i]*arr[i]);
		}

	}

	printf("\n");

}

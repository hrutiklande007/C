

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

	printf("Print Array : ");

	for(int i = size-1 ; i>=0 ; i--){

		if(size%2==1){
			if(i%2==0){
				printf("%d | ",arr[i]);
			}
		}else{
		
			if(i%2==1){
				printf("%d | ",arr[i]);
			}
		}

	}

	printf("\n");

}

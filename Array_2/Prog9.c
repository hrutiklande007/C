

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

	printf("Enter the index value up to which you want to print the elements : \n");

	int ind;
	scanf("%d",&ind);

	for(int i = 0 ; i<size ; i++){

		if(ind>size){
		
			printf("Index cannot be greater than size. Re-Enter the index\n");
			scanf("%d",&ind);
			i--;
			
		}else{
			if(i<ind){
				printf("%d | ",arr[i]);
			}
		}
	}

	printf("\n");

}

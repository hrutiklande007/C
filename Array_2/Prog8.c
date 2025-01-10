

#include<stdio.h>

void main(){

	int size;

	printf("Enter the size fo array : ");
	scanf("%d",&size);

	getchar();

	char arr[size];

	printf("Enter the elements : \n");

	for(int i = 0 ; i<size ; i++){
	
		scanf("%c",&arr[i]);
		getchar();
	}

	printf("--------------\n");

	for(int i = 0 ; i<size ; i++){

		if(i%2==0){
			printf("%c | ",arr[i]);
		}

	}

	printf("\n");

}

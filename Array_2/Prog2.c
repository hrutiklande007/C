
#include<stdio.h>

void main(){

	int size;

	printf("Enter the size fo array : ");
	scanf("%d",&size);

	char arr[size];

	printf("Enter the Character : \n");

	getchar();
	
	for(int i = 0 ; i<size ; i++){
	
		scanf("%c",&arr[i]);
		getchar();
		

	}

	printf("---------------------------\n");

	for(int i = 0 ; i<size ; i++){

		printf("%d\n",arr[i]);

	}

	printf("\n");

}

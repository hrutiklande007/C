
#include<stdio.h>

void main(){

	int N;

	printf("Enter the size of an array : ");

	scanf("%d",&N);

	printf("Enter the array elements :\n");

	int arr[N];

	int num;
	for(int i = 0 ; i<N ; i++){
	
		scanf("%d",&num);
		arr[i] = num;

	}

	printf("First element divisible by 5 found at index : ");

	

	for(int i = 0 ; i<N ; i++){
	
		if(arr[i]%5==0){
			printf("%d",i);
			break;
		}
	}

	printf("\n");
}

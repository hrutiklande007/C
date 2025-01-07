
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

	printf("Product of even elements : ");

	int mult = 1;

	for(int i = 0 ; i<N ; i++){
	
		if(arr[i]%2==0){
			mult = mult*arr[i];
		}
	}

	printf("%d\n",mult);
}

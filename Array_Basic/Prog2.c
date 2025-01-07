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

	printf("Sum of even index elements : ");

	int sum = 0;

	for(int i = 0 ; i<N ; i++){
	
		if(i%2==0){
			sum = sum + arr[i];
		}
	}

	printf("%d\n",sum);
}

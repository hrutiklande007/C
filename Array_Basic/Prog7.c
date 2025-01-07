
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

	printf("Difference between even index elements and odd index elements : ");

	int even = 0;
	int odd = 0;

	for(int i = 0 ; i<N ; i++){
	
		if(i%2==0){
			even = even + arr[i];
		}else{
		
			odd = odd + arr[i];
		}
	}

	printf("%d\n",even-odd);
}

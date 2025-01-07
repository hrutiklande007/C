
#include<stdio.h>

void main(){

	int N;

	printf("Enter the size of an array : ");

	scanf("%d",&N);

	printf("Enter the array elements :\n");

	char arr[N];

	for(int i = 0 ; i<N ; i++){
	
		scanf(" %c",&arr[i]);
	

	}

	printf("Vowels with index : ");


	for(int i = 0 ; i<N ; i++){
	
		if(arr[i]=='A' || arr[i] == 'a' || arr[i] == 'e' || arr[i]=='E' || arr[i]=='i' || arr[i]=='I' || arr[i]=='o' || arr[i]=='O' || arr[i]=='u' || arr[i]=='U'){
			printf("Elements : %c & Index : %d\n",arr[i],i);
		}
	}

	printf("\n");
}

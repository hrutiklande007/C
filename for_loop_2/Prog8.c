

#include<stdio.h>

void main(){


	for(int i = 1 ; i<=9 ; i++){

	
		if(i%2!=0){
			printf("%d ",i);
		}else{
		
			printf("%c ",65+i-1);
		}
	}

	printf("\n");
}

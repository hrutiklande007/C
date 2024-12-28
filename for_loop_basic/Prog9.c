
#include<stdio.h>

void main(){

	int count = 0;

	for(int i = 0; i<100 ; i++){
	
		if(i%2==1){
			printf("%d\n",i);
			count++;
			if(count == 10){
				break;
			}
		}
	}
}

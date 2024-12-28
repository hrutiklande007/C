

#include<stdio.h>

void main(){

	int num;
	

	printf("Number : ");
	scanf("%d",&num);



	if(num>0){

		if(num%2==0){
			for(int i = 1 ; i<=10 ; i++){
	
				printf("%d\n",num*i);
			}
		}else{
		
			for(int i = 10 ; i>0 ; i--){
			
				printf("%d\n",num*i);
			}
		}



	}else{
	
		printf("Enter the positive number.\n");
	}
}

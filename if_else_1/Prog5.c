#include<stdio.h>
void main(){

	char Alpha;

	printf("Enter the alphabet : ");
	scanf("%c",&Alpha);

	if(65<=Alpha && Alpha<=90){
	
		printf("Uppercase\n");
	}else if(97<=Alpha && Alpha<=122){
	
		printf("LowerCase\n");
	}else{
	
		printf("None\n");
	}

}

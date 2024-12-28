#include<stdio.h>

void main(){

	int a;
	int b;
	int c;

	printf("Enter the value of a : ");
	scanf("%d",&a);

	printf("Enter the value of b : ");
	scanf("%d",&b);

	printf("Enter the value of c : ");
	scanf("%d",&c);

	if(a*a+b*b==c*c){
	
		printf("Pythagorean triplet.\n");
	}else{
	
		printf("Not a Pythagoresn triplet.\n");
	}

}

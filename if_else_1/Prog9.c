#include<stdio.h>

void main(){

	int marks;

	printf("Enter the marks : \n");
	scanf("%d",&marks);

	if(marks>=90){
	
		printf("A\n");
	}
	else if(marks<90 && marks>=80){
	
		printf("B\n");
	}
	else if(marks<80 && marks>=70){
	
		printf("C\n");
	}
	else if(marks<70 && marks>=60){
	
		printf("D\n");
	}
	else if(marks<60 && marks>=50){
	
		printf("E\n");
	}
	else if(marks<50){
	
		printf("F\n");
	}

}

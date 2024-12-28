#include<stdio.h>

void main(){

	int ang1;
	int ang2;
	int ang3;

	printf("Enter Angle first : \n");
	scanf("%d",&ang1);
	printf("Enter Angle second : \n");
	scanf("%d",&ang2);
	printf("Enter Angle third : \n");
	scanf("%d",&ang3);

	if(ang1+ang2+ang3==180){
	
		printf("The Triangle is valid.\n");

	}else{
	
		printf("Invalid Triangle.\n");
	}

}

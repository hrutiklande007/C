
#include<stdio.h>

void main(){

	int rows;

	printf("Enter the rows : ");
	scanf("%d",&rows);

	int num = 1;

	for(int i = 1 ; i<=rows ; i++){
	
		for(int j = 1 ; j<=rows ; j++){
		
			if(i%2!=0){
				if(j%2==0){
					printf("%d\t",num*num);
					num++;
				}else{
			
					printf("%d\t",num);
					num++;
				}
			
			}else{
				if(j%2==1){
					printf("%d\t",num*num);
					num++;
				}else{
			
					printf("%d\t",num);
					num++;
				}
		
			}
		}
		printf("\n\n");
	}
}

#include<stdio.h>
void main(){
	int x=19;
	printf("%d \n",x++ + --x - x++);
	printf("%d \n",--x + x-- - x++ + ++x);
}

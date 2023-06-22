#include<stdio.h>
int square(int);

void main(){
	
	int a;
	int c;


	printf("enter the number :");
	scanf("%d",&a);

	c = square(a);

	printf("\n square of the selected number is: %d",c);



}

int square (int n)

{

	return n*n;

}	

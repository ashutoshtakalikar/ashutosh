#include<stdio.h>
int square(int);

void main(){

	int a;
	int ans;

	printf("Select the number :");
	scanf("%d",&a);

	ans = square(a);

	printf("\nSquare of the selected number is : %d",ans);
}

int square (int n)

{
	return n*n;

}

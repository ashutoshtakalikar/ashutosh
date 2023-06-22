#include<stdio.h>

double factorial(double);
int main(){

	int t,c;
	printf("Enter the Number whose Factorial you want to calculate :");
	scanf("%d",&t);

        c = factorial(t);

	printf("factorial = %.0d",c);

	return 0;
}


double factorial(double t)
{
	if(t == 1)

	{
		return 1;
	}
	else{
		return t*factorial(t-1);
	}
}

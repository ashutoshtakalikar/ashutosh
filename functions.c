#include<stdio.h>

void find_largest(int,int,int );  // Function Declaration

// Function Declartion + Definition
float find_avg(int a, int b, int c)
{
	return ( a+b+c) / 3;
}

void main()
{

	int a, b, c;
	float avg;

	printf("\n Please Enter number : ");
	scanf("%d", &a);
	printf("\n Please Enter number : ");
	scanf("%d", &b);
	printf("\n Please Enter number : ");
	scanf("%d", &c);

	find_largest(a,b,c); // Function Call
	avg = find_avg(a,b,c); // Function Call

	printf("\n Average is %f ", avg);

}

// Function Definition
void find_largest(int a1, int b1,int c1)
{
	if(a1 >= b1 && a1 >= c1)
	{
		printf("\n %d is greatest!", a1);
	}
	else if( b1 >= a1 && b1 >= c1)
	{
		printf("\n %d is greatest!", b1);
	}
	else{
		printf("\n %d is greatest!", c1);
	}
}


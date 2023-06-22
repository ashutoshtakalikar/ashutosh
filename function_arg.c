#include<stdio.h>



void check_even_odd(int a)
{
	a = a + 2;

	printf("\n Value of a is %d ", a);
}


void check_1(int *a)
{
	*a = *a + 10;
	printf("\n Value of a is %d ", *a);
}

void main()
{
	int a;

	printf("\n Enter Value for a : ");
	scanf("%d", &a);


	check_even_odd(a);
	printf("\n Value of a after check_even_odd() function call is %d", a);

	check_1(&a);
	printf("\n Value of a after check_1 function call is %d", a);
}


#include<stdio.h>

void main()
{
	int a,b, res, choice;

	printf("\n Enter Value for a :");
	scanf("%d",&a);
	
	printf("\n Enter Value for b :");
	scanf("%d",&b);

	printf("\n Enter Choice as 1 for +, 2 for -, 3 for / , 4 for * :");
	scanf("%d",&choice);

	if(choice == 1)
	{
		res = a + b;
	}
	else if(choice == 2)
	{
		res = a - b;
	}else if(choice == 3)
	{
		res = a / b;
	}
	else if(choice == 4)
	{
		res = a * b;
	}
	else{
		res = -1;
		printf("\n Wrong Choice Entered!!");
	}

	printf("\n The Result is %d ",res);
}


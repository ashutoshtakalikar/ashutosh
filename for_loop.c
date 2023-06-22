#include <stdio.h>
void main ()
{
	int m,count;
	printf("\n Enter value for count: ");
	scanf("%d",&count);

	for(m=0;m<count;m = m++)
	{
		if (m % 2==0)
		{
			printf("\n %d is a even number",m);
		}
		else
		{
			printf("\n %d is odd",m);
		}
	}
}

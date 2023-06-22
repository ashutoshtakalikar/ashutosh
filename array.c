#include<stdio.h>

void main()
{
        int marks[10];
        int i;

        for(i=0;i<10;i++)
        {
                printf("\n Enter Marks for Subject %d :", i+1);
                scanf("%d", &marks[i]);

        }

        for(i=0;i<10;i++)
        {
                printf("\n Entered Marks for Subject %d is %d", i+1, marks[i]);
        }

}


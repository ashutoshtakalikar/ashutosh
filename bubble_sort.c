#include<stdio.h>

void main()
{
        int i,j, temp,arr[10];

        printf("\n Enter The Array Numbers  : ");

        for(i=0;i<10;i++)
        {
                scanf("%d", &arr[i]);
        }

        printf("\n Sorting the array ");

        for(i=0;i<10;i++)
        {
                for(j=i+1;j<10;j++)
                {
                        if(arr[i]>arr[j])
                        {
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                        }
                }
        }

        printf("\n\n Printing Sorted Array ");

        for(i=0;i<10;i++)
        {
                printf("\n %d", arr[i]);
        }
}

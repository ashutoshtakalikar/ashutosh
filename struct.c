#include<stdio.h>

struct student
{
	char name[50];
        char div[10];
	int roll_num;
	int age;
};

void main(){

	int i;
	char c1;
	struct student S1,S2;

	printf("\nEnter the Name of First Student :");
	scanf("%s",S1.name);

	printf("\nEnter the Division of First Student :");
	scanf("%s",S1.div);
      
	printf("\nEnter the Roll Number of First Student :");
	scanf("%d",&S1.roll_num);
        
        printf("\nEnter the age of First Student :");	
	scanf("%d",&S1.age);

        printf("\nEnter the Name of Second Student :");
        scanf("%s",S2.name);
        
        printf("\nEnter the Division of Second Student :");
        scanf("%s",S2.div);
        
        printf("\nEnter the Roll Number of Second Student :");
        scanf("%d",&S2.roll_num);
        
        printf("\nEnter the age of Second Student :");
        scanf("%d",&S2.age);
          
        printf("\nThe Name of First Student is %s",S1.name);
        printf("\nThe Division of First Student is %s",S1.div);
        printf("\nThe Roll Number of First Student is %d",S1.roll_num);
        printf("\nThe age of First Student is %d",S1.age);

        printf("\nThe Name of Second Student is %s",S2.name);
        printf("\nThe Division of Second Student is %s",S2.div);
        printf("\nThe Roll Number of Second Student is %d",S2.roll_num);
        printf("\nThe age of Second Student is %d",S2.age);
}
  	

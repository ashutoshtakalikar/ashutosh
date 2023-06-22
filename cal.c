#include <stdio.h>  
void main()  
{  
      
    char opt;  
    int num1, num2;   
    float result;  

    printf (" Choose an operator from the following: +, -, *, / to perform the operation in C Calculator \n ");  
    scanf ("%c", &opt); 
    
    if (opt == '/' )  
    {  
        printf (" Selected operator is Division");  
    }  
    else if (opt == '*')  
    {  
        printf (" Selected operator is Multiplication");  
     }  
       
    else if (opt == '-')  
    {  
        printf (" Selected operator is Subtraction");  
     }  
        else if (opt == '+')  
    {  
        printf (" Selected operator is Addition");  
     }     
    
    printf (" \n Enter the first number: ");  
    scanf(" %d", &num1); 
    
    printf (" Enter the second number: ");  
    scanf (" %d", &num2);  
      
    switch(opt)  
    {  
        case '+':  
            result = num1 + num2; 
            printf (" Addition of %d and %d is: %.2f", num1, num2, result);  
            break;  
          
        case '-':  
            result = num1 - num2; 
            printf (" Subtraction of %d and %d is: %.2f", num1, num2, result);  
            break;  
              
        case '*':  
            result = num1 * num2;
            printf (" Multiplication of %d and %d is: %.2f", num1, num2, result);  
            break;            
          
        case '/':  
            if (num2 == 0)   
            {  
                printf (" \n You cannot divide by zero. Please enter another number. ");  
                scanf ("%d", &num2);        
                }  
            result = num1 / num2;
            printf (" Division of %d and %d is: %.2f", num1, num2, result);  
            break;  
        default:  
            printf (" Enter the following operators only: +, -, *, / ");               
    }  
     
}  

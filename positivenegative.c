#include <stdio.h>
 
void main()
{
    int number;
    printf("Enter any one number: ");
    scanf("%d", &NUM);
     
 
    if(NUM > 0)
    {
        printf("Number is POSITIVE");
    }
    else if(NUM < 0)
    {
        printf("Number is NEGATIVE");
    }
    else
    {
        printf("Number is ZERO");
    }
 
    getch();
} 

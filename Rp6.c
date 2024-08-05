
/*
Programmer:Rutvi sojitra
Date:22 july 2024
Aim:operation of numbers
*/
#include<stdio.h>
void main()
{


    int x,y;
    char o;
    
    printf("enter your choice");
    scanf("%c",&o);

    printf("enter value of x");
    scanf("%d",&x);

    printf("enter value of y");
    scanf("%d",&y);
    
   switch(o)
  {
    case'+':
    printf ("%d",x+y);
    break;

    case'-':
    printf("%d",x-y);
    break;

    case'*':
    printf("%d",x*y);
    break;

    case'/':
    printf("%d",x/y);
    break;

    defult:
    printf("invalid value");
  }
}

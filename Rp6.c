
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

    scanf("%d%d",&x,&y);
    fflush(stdin);

    scanf("%c",&o);

    switch ( o )
    {
    case '+':
    printf ("%d",x+y);
    break;

    case '-':
    printf("%d",x-y);
    break;

    case '*':
    printf("%d",x*y);
    break;

    case '/':
    printf("%d",x/y);
    break;

    defult:
    printf("invalid value");
}
}

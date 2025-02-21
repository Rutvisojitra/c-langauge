#include <stdio.h>
void main()
{
    float pin = 360410;
    float balance = 45000;
    float p, b;

    printf("enter pin no");
    scanf("%f", &p);

    if (p == pin)
    {
        printf("your pin is correct \n");
        printf("enter the withdrawal amount");
        scanf("%f", &b);

        if (b <= balance)
        {
            printf("withdrawal successful ");
        }
        else
        {
            printf(" balance is insufficient");
        }
    }
    else
    {
        printf("enter valid pin no");
    }
}
/*
PROGRAMMMER:RUTVI SOJITRA
DATE:5 AUGUST 2024
AIM: MAKE TRIANGLE OF 1 AND 0
*/
#include<stdio.h>
void main()
{
    int c,r,n;

    printf("enter the value of rows ");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(c%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}

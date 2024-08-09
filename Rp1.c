/*
PROGRAMMER:RUTVI SOJITRA
DATE:9 AUGUST 2024
AIM:PRINT DIAMOND
*/
#include<stdio.h>
void main()
{
    int r,c,n,n1,n2;
    printf("enter the value of n");
    scanf("%d",&n);
    n1=n/2+1;
    n2=n/2;
    for(r=1;r<=n1;r++)
    {
        for(c=1;c<=n1-r;c++)
        {
            printf("  ");
        }
        for(c=n1-r+1;c<=n1;c++)
        {
            printf(" *");
        }
        for(c=1;c<=r-1;c++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(r=1;r<=n2;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("  ");
        }

        for(c=1;c<=2*(n2-r+1)-1;c++)
        {
            printf(" *");
        }
        printf("\n");
        for(c=n2-r+1;c<=n2-r;c++)
        {
            printf(" *");
        }
    }
}

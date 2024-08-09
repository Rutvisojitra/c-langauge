/*
PROGRAMMER:RUTVI SOJITRA
DATE:9 AUGUST 2024
AIM:PRINT A TRIANGLE
*/
#include<stdio.h>
void main()
{
    int x,n,r,c;
    printf("enter the value of n");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        x=1;
        for(c=1;c<=n-r;c++)
        {
            printf(" ");
        }
        for(c=(n-r+1);c<=n;c++)
        {
            printf("%d",x);
            x++;
        }

        printf("\n");
    }
}

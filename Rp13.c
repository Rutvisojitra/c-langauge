/*
PROGRAMMER:RUTVI SOJITRA
DATE:5 AUGUST 2024
AIM:DISPLAY THE MULTIPLICATION TABLE
*/
#include<stdio.h>
void main()
{
    int h,r,c,i,m;
    printf("enter the value of r");
    scanf("%d",&r);
    printf("enter the value of c");
    scanf("%d",&c);

    for(i=1;i<=r;i++)
    {
        for(h=1;h<=c;h++)
        {
            m=i*h;

               printf("%5d\t",m);
        }

        printf("\n");
    }

}

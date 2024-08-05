/*
PROGRAMMER:RUTVI SOJITRA 2024
DATE:5 AUGUST 2024
AIM:CALCULATE THE TOTAL BUDGATE OF COMPANY
*/
#include<stdio.h>
void main()
{
    int i,d,b=0;
    printf("enter the value of day");
    scanf("%d",&d);
    for(i=1;i<=d;i+=1)
    {
        if(d%2==0)
          {
               b+=200;
          }
    }

    printf("your budget is %d",b);

}

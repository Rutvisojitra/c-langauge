#include<stdio.h>
void main()
{
    int r,n,sum;

    printf("enter number \n");
    scanf("%d",&n);
     
    sum=0;

    while (n>0)
    {
       r=n%10;
       sum=sum*10+r;
       n=n/10;
    }
    printf("%d",sum);
    
    
}
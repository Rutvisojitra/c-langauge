/*
PROGRAMMER:RUTVI SOJITRA
DATE:9 AUGUST 2024
AIM:PRINT TRIANGLE
*/
#include<stdio.h>
void main()
{
    int r,c,n;
    char x;
    printf("enter the value of n");

    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {

      for(c=1;c<=(n-r);c++)
      {
          printf(" ");
      }
       x='A';
      for(c=(n-r+1);c<=n;c++)
      {
          printf("%c",x);
          x++;
      }
      x=x-2;
      for(c=n+1;c<=n+r-1;c++)
       {
           printf("%c",x);
           x=x-1;
       }
       printf("\n");
    }
}

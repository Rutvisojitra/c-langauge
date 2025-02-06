#include<stdio.h>
#include<math.h>
void main()
{
    int x,y;
    printf("enter the value of x \n");
    scanf("%d",&x);

    y=3*pow(x,3)+2*pow(x,2)-5*x+1;
    printf("%d",y);
    
}
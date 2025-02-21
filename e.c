#include<stdio.h>
void main()

{
    int i,f,n;

    printf("enter number \n");
    scanf("%d",&n);
    
    i=1;
    f=1;

    while (i<=n)
    {
        f=f*i;
        i++;
    }
    printf("%d",f);
}
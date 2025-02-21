#include<stdio.h>
void main()
{
    int i,sn,en;

    printf("enter starting number \n");
    scanf("%d",&sn);

    printf("enter ending number \n");
    scanf("%d",&en);

    i=sn;

    while (i<=en)
    {
        printf("%d",i);
        i++;
        printf("\n");
    }
    
}
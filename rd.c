#include<stdio.h>
int main()
{
    int cash;
    int hdigit;
    int fdigit;
    int tdigit;
    int newnum;
    int newnum1;
    printf("enter the cash");
    scanf("%i",&cash);

    hdigit=cash/100;
    newnum=cash%100;
    fdigit=newnum/50;
    newnum1=newnum%50;
    tdigit=newnum1/10;

    printf("\n 100 note %i",hdigit);
    printf("\n 50 note %i",fdigit);
    printf("\n 10 note %i",tdigit);
}

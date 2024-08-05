
/*
PROGRAMMER:RUTVI SOJITRA
DATE:1 AUGUST 2024
AIM:CONVERT TEMPERTURE READING FROM CELSIUS TO FAHRENHEIT
*/

#include<stdio.h>
void main()
{
    float t,c,f;

    printf("if you want convert c to f then click 1 or you want convert f to c then click 2 \n");
    printf("choose 1 or 2");
    scanf("%f",&t);

    if(t==1)

    {

    printf("enter the value of temperature in c:");
    scanf("%f",&c);

    f=(c*9/5)+32;

    printf("value of temperature f %f",f);

    }

    else

    {
        printf("enter the value of temperature in f:");
        scanf("%f",&f);

        c=(f-32)*5/9;

        printf("vale of temperature in c %f",c);

    }
}

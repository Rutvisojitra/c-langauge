#include<stdio.h>
void main()
{
    float a,pa,total;

    printf("0 for regular \n 1 for silver \n 2 for gold \n");
    printf("enter the value \n");
    scanf("%f",&a);

    if(a==0)
    {
        printf("regular membership \n");
        printf("enter the purchase amount \n");
        scanf("%f",&pa);

        if(pa<500)
        {
           total=(pa-(pa*0/100));
           printf("your final price is %f \n",total);
        }
        else if(pa==500 || pa>500)
        {
            total=(pa-(pa*5/100));
            printf("your final price is %f \n",total);
        }
        else if(pa==1000 || pa>1000)
        {
            total=(pa-(pa*10/100));
            printf("your final price is %f \n",total);
        }
        else
        {
                printf("invalid input \n");
        }

    }
    else if(a==1)
    {
        printf("silver membership\n");
        printf("enter the purchase amount\n");
        scanf("%f",&pa);

        if(pa<500)
        {
            total=(pa-(pa*5/100));
           printf("your final price is %f \n",total);
        }
        else if(pa==500 || pa>500 || pa<1000)
        {
            total=(pa-(pa*10/100));
            printf("your final price is %f \n",total);
        }
        else if(pa==1000 || pa>1000)
        {
            total=(pa-(pa*15/100));
            printf("your final price is %f \n",total);
        }
        else
        {
                printf("invalid input \n");
        }

    }
     else if(a==2)
    {
        printf("gold membership\n");
        printf("enter the purchase amount\n");
        scanf("%f",&pa);

        if(pa<500)
        {
            total=(pa-(pa*10/100));
           printf("your final price is %f \n",total);
        }
        else if(pa==500 || pa>500)
        {
            total=(pa-(pa*15/100));
            printf("your final price is %f \n",total);
        }
        else if(pa==1000 || pa>1000)
        {
            total=(pa-(pa*20/100));
            printf("your final price is %f \n",total);
        }
        else
        {
                printf("invalid input \n");
        }

    }
    else{
        printf("invalid input \n");
        printf("enter no 0 ,1 or 2 \n");
    }
    printf("thank you!!");
}
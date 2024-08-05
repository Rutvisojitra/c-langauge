
/*
programmer:rutvi sojitra
date:26 july 2024
*/
#include<stdio.h>
void main()
{

     float bunglow,plot,car,apartment,hotel,car2,a,b;


     //wealth of raman
     bunglow=12000000;
     plot=6000000;
     car=3000000;

     //a is total wealth of raman
     a=bunglow+plot+car;
     printf("total wealth of raman %f \n",a);

     //wealth of suman
     apartment=11000000;
     hotel=8000000;
     car2=8000000;

     // b is total wealth of suman
     b=apartment+hotel+car2;
     printf("total wealth of suman %f \n",b);

     //greater total wealth between raman and suman

     if(a>b)
     {
          printf("raman is wealthier than suman");
     }
     else if(b>a)
     {
         printf("suman is wealthier than raman");
     }
     else if(b=a)
     {
         printf("both are equaliant");
     }

}



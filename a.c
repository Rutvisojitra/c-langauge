#include<stdio.h>
void main()
{
    int a=1;
  printf("customer 1 purchase %d no ticket \n",a);

  printf("customer 2 purchase %d no ticket \n",++a);

  printf("customer 2 cancle %d no ticket \n",a--);

  printf("customer 3 purchase %d no ticket \n",++a);

  printf("customer 3 cancle %d no ticket \n",a--);

  printf("customer 4 purchase %d no ticket \n",++a);

  printf("customer 5 purchase %d no ticket \n",++a);

  printf("total sold ticket is %d",a);
}
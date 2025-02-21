#include <stdio.h>
void main()
{
    int n;
    printf("enter the value the n");
    scanf("%d", &n);

    if (n <= 100 && n >= 90)
    {
        printf("Gread:A \n Excellent perfomance");
    }
    else if (n <= 89 && n >= 80)
    {
        printf("Great:B \n very good performance");
    }
    else if (n <= 79 && n >= 70)
    {
        printf("Great:C \n good performance");
    }
    else if (n <= 69 && n >= 60)
    {
        printf("Great:D \n satisfactory performance");
    }
    else
    {
        printf("Great:F(fail) \n needs improvment");
    }
}
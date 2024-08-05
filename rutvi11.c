/*
PROGRAMMER:RUTVI SOJITRA
DATE:4 AUGUST 2024
AIM:MAKING MATCHSTICK GAME
*/
#include<stdio.h>
void main()
{

    int matchstick=21,u,c;

    printf("in the puzzle match stick are 21 \n");
    printf("you and your computer will pick up the stick one by one \n");
    printf("sticks can be picked from 1 to 4 \n");
    printf("the who,picked up the last stick,is the loser \n");

    while(matchstick>1)
    {
        printf("choose your matchstick from 1 to 4: \n");
        scanf("%d",&u);
        c=5-u;
        matchstick-=u;
        matchstick-=5-u;

        printf("computer choose matchstick %d \n",c);
        printf("you have only matchstick %d \n",matchstick);



    if(matchstick==1)

        {
        printf("you lose");
        }

    }

}

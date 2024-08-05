/*
programmer:rutvi sojitra
date:19 july 2024
aim:find the number of illiterate men and women
*/
#include<stdio.h>
void main()
{
    //total population of bharat in 2024
    long total_population=1441981744;

    //rate of women in population
    double total_rate_of_women=48.4;

    //total literacy rate
    double total_literacy_rate=85.95;

    //literacy rate of male population
    double literacy_rate_male=80.95;

    //literacy rate of women population
    double literacy_rate_of_women=62.84;

    //calculate number of male and women
    long total_women=(total_rate_of_women*total_population)/100;
    long total_male=total_population-total_women;

    //calculate number of literacy male and women
    long total_literacy_women=(literacy_rate_of_women*total_women)/100;
    long total_literacy_male=(literacy_rate_male*total_male)/100;

    //calculate number of illiterate male of women
    long total_illiterate_women=total_women-total_literacy_women;
    long total_illiterate_male=total_male-total_literacy_male;

    //results
    printf("total population of bharat in 2024:%ld \n",total_population);
    printf("total women:%ld \n",total_women);
    printf("total male:%ld \n",total_male);
    printf("total literacy women:%ld \n",total_literacy_women);
    printf("total literacy male:%ld \n",total_literacy_male);
    printf("total illiterate women:%ld \n",total_illiterate_women);
    printf("total illiterate male:%ld \n",total_illiterate_male);
}

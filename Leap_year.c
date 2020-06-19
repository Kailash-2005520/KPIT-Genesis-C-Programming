#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year to be checked \n");
    scanf("%d",&year);
    if(year>0)
    {   if(year%4==0)
        {
            if(year%100==0)
            {
                if(year%400==0)
                    printf("The given year is a leap year \n");
                else
                    printf("The given year is not a leap year \n");
            }
            else
                printf("The given year is a leap year \n");
        }
        else
            printf("The given year is not a leap year \n");

    }
    else
        printf("Invalid year \n");
    return 0;
}

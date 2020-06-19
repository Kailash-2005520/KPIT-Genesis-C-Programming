#include<stdio.h>
int main()
{
    int units, rate;
    rate=0;
    printf("Enter the number of units used \n");
    scanf("%d",&units);

    if(units<=50)
    {
        rate=units*10;

    }
    else if((units>50)&&(units<=100))
    {
        rate=((units-50)*15)+(50*10);
    }
    else if ((units>100)&&(units<=150))
    {
        rate=((units-100)*20)+(50*15)+(50*10);

    }
    else if(units>150)
    {
        rate=((units-150)*25)+(50*20)+(50*15)+(50*10);
    }
    printf("The bill amount is %d \n",rate);
    return 0;

}


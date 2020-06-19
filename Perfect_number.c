#include<stdio.h>

int main()
{
    int num,sum; sum=0;
    printf("Enter the number to be checked \n");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
            sum+=i;//Sum of factors
    }
    if(sum==num)
        printf("Number entered is a perfect number \n");
    else
        printf("Number entered is not a perfect number \n");

    return 0;
}

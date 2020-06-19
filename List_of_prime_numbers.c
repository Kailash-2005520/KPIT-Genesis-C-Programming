#include<stdio.h>
int prime(int);
int prime(int num)
{
    if(num<=1)
        return 0;
    else{
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
            return 0;

    }
    return 1;
    }
}
int main()
{
    int num,res;
    printf("Enter the number till where prime numbers have to be printed \n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        if(prime(i)==1)
            printf("%d ",i);

    }
return 0;
}

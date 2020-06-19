#include<stdio.h>

int factorial(int);

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
        fact=fact*i;
return fact;
}

int main()
{
    int n,r,res;
    res=0;
    printf("Enter the values of n and r \n");
    scanf("%d%d",&n,&r);
    res=factorial(n) /(factorial(n-r) * factorial(r));//nCr=n!/((n-r)!*r!)
    printf("The value of nCr is %d", res);
    return 0;
}

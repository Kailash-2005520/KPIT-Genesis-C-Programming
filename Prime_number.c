#include<stdio.h>

int prime(int);
int prime(int num)
{
    int flag=0;
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
            flag++;
    }
    if(flag==0)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("Enter the number to be checked \n");
    scanf("%d",&num);
    int res=prime(num);
    if(res==1)
        printf("Number entered is a prime number \n");
    else
        printf("Number entered is a composite number\n");
    return 0;
}

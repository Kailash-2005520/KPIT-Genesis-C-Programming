#include<stdio.h>

int sum(int);
int reverse(int);
int palindrome_check(int);

int sum(int num)
{
    int r,sum; sum=0;
    while(num!=0)
    {
        r=num%10;
        sum+=r;
        num=num/10;
    }
return sum;
}
int reverse(int num)
{
    int r, rev;rev=0;
    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }

return rev;
}

int palindrome_check(int num)
{
    int palin=reverse(num);
    if(num==palin)
        return 1;
    else
        return 0;
}

int main()
{
    int choice, num, result;
    printf("Enter the choice of operation \n1. Sum of digits of number. \n2.Reverse digits of number. \n3.Palindrome check. \n");
    scanf("%d",&choice);
    printf("Enter the number \n");
    scanf("%d",&num);
    if(choice==1)
    {
        result=sum(num);
        printf("The sum of the digits in the number is %d \n",result);
    }
    else if(choice==2)
    {
        result=reverse(num);
        printf("The Reverse of the digits in the number is %d \n",result);

    }
    else if(choice==3)
    {
        result=palindrome_check(num);
        if(result==1)
            printf("The Number is a palindrome\n");
        else
            printf("The Number is not a Palindrome \n");

    }
    else
        printf("Invalid choice\n");
return 0;
}

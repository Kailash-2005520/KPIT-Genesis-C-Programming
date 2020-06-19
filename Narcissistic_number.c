#include<stdio.h>
#include<math.h>

int main()
{
    int num,sum;sum=0;
    printf("Enter the number to be checked \n");
    scanf("%d",&num);

    int n=num;int num_of_digit=0;int k;
    while(n!=0)
    {   num_of_digit++;
        n=n/10;
    }
    while(num!=0)
    {   k=num;
        sum+=pow(k%10,num_of_digit);
        k=k/10;

    }
    if(sum==num)
        printf("Number entered is a narcissistic number \n");
    else
        printf("Number entered is not a narcissistic number \n");
    return 0;

}

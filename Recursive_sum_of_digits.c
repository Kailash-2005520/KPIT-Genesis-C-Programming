#include<stdio.h>

int sum(int);
int sum(int num)
{   if(num == 0)
        return 0;

    return ((num % 10) + sum(num / 10));//extract the last digit and then use recursive function to extract the digit from the next place
}

int main()
{
    int num;

    printf("Enter the number \n");
    scanf("%d",&num);

    printf("Sum of digits in the number is %d \n",sum(num));
    return 0;

}

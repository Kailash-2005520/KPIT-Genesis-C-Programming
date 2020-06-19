#include<stdio.h>
int lcm(int, int);

int lcm(int num1,int num2)
{   int lcm;
    for(int i=1;i<=num1*num2;i++)
    {   if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;//since it's supposed to be the lowest common multiple and when the lowest multiple is found break the loop

        }
    }
    return lcm;
}
int main()
{
    int num1,num2;
    printf("Enter the two numbers \n");
    scanf("%d%d",&num1,&num2);
    printf("LCM of the two numbers is %d \n",lcm(num1,num2));
    return 0;

}

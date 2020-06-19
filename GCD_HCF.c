#include<stdio.h>

int gcd(int,int);
int hcf(int,int);

int gcd(int num1, int num2)
{
   while(num1!=num2)
    {
        if(num1 > num2)
            num1 =num1 - num2;
        else
            num2 = num2-num1;
    }
    return num1;
}

int hcf(int num1, int num2)
{
    int hcf;int min;
     if(num1<num2)
        min=num1;
     else
         min=num2;

    for(int i=1; i<=min; i++)
    {

        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }
    return hcf;

}

int main()
{
    int ch,num1,num2,result;
    printf("Enter the two numbers \n");
    scanf("%d%d",&num1,&num2);
    printf("Enter choice: \n1. GCD.\n2. HCF\n");
    scanf("%d",&ch);
    if(ch==1)
       {
         result=gcd(num1,num2);
         printf("GCD of the two numbers is %d \n",result);
       }
    else if (ch==2)
        {
            result=hcf(num1,num2);
            printf("HCF of the two numbers is %d \n",result);
        }
    else
        printf("Invalid choice\n");
    return 0;

}

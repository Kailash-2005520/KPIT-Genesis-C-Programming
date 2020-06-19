#include<stdio.h>
long fact(int);

int main()
{

   long a;int num;
    printf("Enter the number of rows to be printed \n");
    scanf("%d",&num);

    for(int n=0; n<num; n++)
    {

        for(int i=n; i<=num; i++)
            printf(" ");


        for(int j=0; j<=n; j++)
        {
            a = fact(n) / (fact(n-j)*fact(j));

            printf("%ld ", a);
        }

        printf("\n");
    }

    return 0;
}


long fact(int num)
{
  long fact=1;
    for(int i=1;i<=num;i++)
        fact=fact*i;
return fact;

}


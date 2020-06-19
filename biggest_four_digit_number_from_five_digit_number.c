#include<stdio.h>
#include<math.h>
int numgen(int);
int numarr[5];
int main()
{
    int num,largest;
    int ptr[5];

    printf("Enter a 5 digit number \n");
    scanf("%d",&num);
        if(num>10000&&num<99999)
        {

         for(int i=0;i<5;i++)
         { ptr[i]=numgen(num);
         }

         for(int i=0;i<5;i++)
         {
             if(ptr[i]>ptr[i+1])
             {
                 largest=ptr[i];
             }
         }

         for(int i=0;i<5;i++)
         {
          printf("%d\n",ptr[i]);}
         printf("The largest four digit number entered is %d\n",largest);

        }
        else
        printf("Invalid number \n");

return 0;
}

int  numgen(int num)
{   int newnum=0;
    int digit,n,r;
    n=0; int a =0x11110;

    for(int i=0;i<5;i++)
        { newnum=num&a;
            for (int j=0;j<5;j++)
            {
                if(i==j)
                    continue;
                else
                {
                    digit= num%10;

                    newnum=newnum*10+digit;
                    num=num/10;
                }
            }a<<01;
        }
       while(newnum!=0)
        {   r=newnum%10;
            n=n*10+r;
            newnum/=10;
        }

    return n;
}

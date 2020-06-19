#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {   if(a>c)
            printf("The greatest among the three numbers is %d \n",a);
        else
            printf("The greatest among the three numbers is %d \n",c);

    }
    else if (a<b)
    {  if(b>c)
            printf("The greatest among the three numbers is %d \n",b);
        else
            printf("The greatest among the three numbers is %d \n",c);

    }
    else
    {
         if(a>c)
            printf("The greatest among the three numbers is %d \n",a);
        else
            printf("The greatest among the three numbers is %d \n",c);

    }
return 0;
}

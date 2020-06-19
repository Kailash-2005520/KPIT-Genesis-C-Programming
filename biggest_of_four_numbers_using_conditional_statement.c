#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the four numbers \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>=b)
    {   if(a>=c)
        {
            if(a>=d)
                printf("The largest of the four numbers is %d",a);
            else
                printf("The largest of the four numbers is %d",d);
        }
        else if (a<c)
        {
             if(c>=d)
                printf("The largest of the four numbers is %d",c);
            else
                printf("The largest of the four numbers is %d",d);
        }

    }
    else if (a<b)
    {
        if(b>=c)
        {
            if(b>=d)
                printf("The largest of the four numbers is %d",b);
            else
                printf("The largest of the four numbers is %d",d);
        }
        else if (b<c)
        {
             if(c>=d)
                printf("The largest of the four numbers is %d",c);
            else
                printf("The largest of the four numbers is %d",d);
        }

    }

    return 0;
}

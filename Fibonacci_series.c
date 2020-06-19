#include<stdio.h>

int main()
{
    int n1=0;
    int n2=1;
    int next,n;
    printf("Enter the length of the fibonacci series \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    { if(i<=1)//in case length of sequence is 2 or lesser. then only 0 and 1 should be printed.
        next=i;
      else{
            next=n1+n2;
            n1=n2;
            n2=next;

            }
        printf("%d, ",next);
    }
    return 0;
}

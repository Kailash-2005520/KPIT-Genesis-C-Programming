#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of modules \n");
    scanf("%d",&n);
    int scores[n];char grade[n];
    printf("Enter the scores obtained by the students in each modules \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);
    }

    for(int i=0;i<n;i++)
    {   if(scores[i]>0 && scores[i]<100)
        {   if(scores[i]>=90)
                grade[i]='S';
            if(scores[i]<90 && scores[i]>=75)
                grade[i]='A';
            if(scores[i]<75 && scores[i]>=60)
                grade[i]='B';
            if(scores[i]<60 && scores[i]>=50)
                grade[i]='C';
            if(scores[i]<50 && scores[i]>=40)
                grade[i]='D';
            if(scores[i]<40)
                grade[i]='F';

        }
        else if(scores[i]<0 || scores[i]>100)
        {
            printf(" Invalid score in module %d \n",(i+1));

        }
    }
    for(int i=0;i<n;i++)
    {   if(scores[i]>0 && scores[i]<100)
        printf("Grade of the student in module %d is '%c'\n",(i+1),grade[i]);
    }
    return 0;

}

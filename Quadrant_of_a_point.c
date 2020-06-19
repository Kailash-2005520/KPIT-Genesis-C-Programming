#include<stdio.h>

int main()
{
    float x,y;
    printf("Enter the x and y coordinates\n");
    scanf("%f%f",&x,&y);
    if(x>0&&y>0)
        printf("Point lies in first quadrant\n");
    else if(x==0&&y==0)
        printf("Point lies in the origin \n");
    else if(x<0&&y>0)
        printf("Point lies in the second quadrant \n");
    else if(x<0&&y<0)
        printf("Point lies in the third quadrant \n");
    else if(x>0&&y<0)
        printf("Point lies in the fourth quadrant \n");
    return 0;
}

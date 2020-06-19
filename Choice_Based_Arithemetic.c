#include<stdio.h>
#include<math.h>
int main()
{

    int ch;
    float num1,num2;
    num1=0;num2=0;
    printf("Enter the two numbers \n");
    scanf("%f%f",&num1,&num2);

    printf("Enter the choice of arithmetic operation to be performed : \n 1. for addition \n 2. for subtraction \n 3. for multiplication \n 4. for division\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
            printf("Sum of the two numbers is %f \n",(num1+num2));
            break;
    case 2:
            printf("Difference of the two numbers is %f \n",(num1-num2));
            break;
    case 3:
            printf("Product of the two numbers is %f \n",(num1*num2));
            break;
    case 4:
            {
            float quo,rem; quo=num1/num2; rem=fmod(num1,num2);
            printf("Quotient of the two numbers is %f and the reminder is %f \n",quo,rem);
            break;
            }
    default:
            printf("Invalid operator");


    }

return 0;
}

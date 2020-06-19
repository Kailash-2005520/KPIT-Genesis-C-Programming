#include<stdio.h>

int main()
{

    char ch;
    printf("Enter the character to be checked \n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Character entered is a vowel \n");

    }
     else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))//because there are other characters such as white space, '.',etc. If it's vowel then it is automatically detected ny first if loop
    {
        printf("Character entered is a consonant \n");

    }
    else
    {
        printf("Character entered is not a alphabet \n");
    }
return 0;
}

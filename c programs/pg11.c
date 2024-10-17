#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("Your character is alphabet");

    }
    else if(ch>=67 && ch<=122)
    {
        printf("Your charecter is alhabet");
    }
    else if (ch>=48 && ch<=57)
    {
        printf("Your charecter is digit");
    }
    else
    {
        printf("Your charecter is special character");
    }
}

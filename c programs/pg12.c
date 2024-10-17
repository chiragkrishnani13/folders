#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch>=67 && ch<=122)

    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            printf("%C is vowel",ch);

        }
        else
        {
            printf("%c is consonant",ch);
        }
    }
 else if (ch>=48 && ch<=57)
    {
        printf("Your charecter is digit");
    }
    else
    {
        printf("Your charecter is special character");
    }
    return 0;
}


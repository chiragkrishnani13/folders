#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("Your number is even");

    }
    else
    {
        printf("Your Number is odd");
    }
    return 0;
}

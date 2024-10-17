#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,d1,d2,d3;
    printf("Enter three digit number:");
    scanf("%d",&n);
    d1=n/100;
    x=n%100;
    d2=x/10;
    d3=x%10;
    if(n<100 && n>999)
    {
        printf("Invalid data");

    }
    else if ((pow(d1,3)+pow(d2,3)+pow(d3,3)) == n)
    {
        printf("Your number is armstrong number");
    }
    else
    {
        printf("Your number is not armstrong number");
    }
}

#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("Enter number:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("1 is not prime nor compsite");
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
         if(n%i==0)
         {
             flag =0;
             break;
         }

        }
        if(flag==1)
        {
            printf("%d is prime number",n);
        }
        else
        {
            printf("%d is not prime number",n);

        }
    }
}

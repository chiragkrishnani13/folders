#include<stdio.h>
int main()
{
    int n,i,flag = 1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 0;
            break;

        }
        else
        {
            flag = 1;
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



    return 0;
}

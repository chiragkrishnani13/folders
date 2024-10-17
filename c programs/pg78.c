#include<stdio.h>
#include<math.h>
int main()
{
    int ans,n,i,x;
    int isArmstrong(int);
    printf("ENter n nad x:");
    scanf("%d%d",&n,&x);

    for(i=n;i<=x;i++)
    {
        ans = isArmstrong(i);
        if(ans==1)
            printf("%d",i);
    }

    }

int isArmstrong(int n)
{
    int count=0,temp,digit,sum=0;
temp=n;
    while(n!=0)
    {
        count++;
        n=n/10;

    }
    n = temp;
    while(n!=0)
    {
        digit = n%10;
        sum = sum + pow(digit,count);
        n = n/10;

    }
    n = temp;
    if(n==sum)
        return 1;
    else
        return 0;
}

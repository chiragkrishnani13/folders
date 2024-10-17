#include<stdio.h>
int main()
{
    int i,n,digit,s=0,product=1,rev=0,temp;
    printf("Enter digit:");
    scanf("%d",&n);
    temp =n;
    for(i=0;i<=n;i++)
    {
       digit = n%10;
       s=s+digit;
       product*=digit;
       rev=rev*10+digit;
    }
    printf("sum of the digit is %d\n",s);
    printf("product of the digit is %d\n",product);
    printf("reverse of the digit is %d\n",rev);

}

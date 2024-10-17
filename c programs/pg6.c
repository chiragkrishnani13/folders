#include<stdio.h>
int main()
{
    int s,m,d1,d2,n,y;
    printf("Enter No.");
    scanf("%d",&n);
    d1=n%10;
    d2=n/10;
    s=d1+d2;
    m=d1*d2;
    y=d1*10+d2;
    printf("Sum of your number %d\n",s);
    printf("Multiplication of your number %d\n",m);
    printf("your Revrsed number is %02d\n",y);



}

#include<stdio.h>
int main()
{
    int s,m,r,n,d1,d2,d3,x,y;
    printf("Enter three digit number");
    scanf("%d",&n);
    if (n<100 || n>999)
    {
        printf("invalid data");
    }
    else{
    d1=n/100;
    x=n%100;
    d2=x/10;
    d3=x%10;
    s=d1+d2+d3;
    m=d1*d2*d3;
    y=((d3*100)+(d2*10)+d1);
    printf("Sum of your number %d\n",s);
    printf("Multiplication of your number is %d\n",m);
    printf("Your reversed number is %03d\n",y);
    }
    return 0;


}

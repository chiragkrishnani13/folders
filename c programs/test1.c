#include<stdio.h>
int main()
{
    unsigned long int nf,rf,nrf;
    int n,r,nr;
unsigned long int factorial(int );

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter r:");
    scanf("%d",&r);

    nf = factorial(n);
    rf = factorial(r);
    nrf = factorial(n-r);

   printf("%d p  %d is = %d\n",n,r,nf/(nrf*rf));
  printf("%d c  %d is = %d\n",n,r,nf/nrf);




 return 0;
}
unsigned long int factorial(int n)
{
    unsigned long int fact = 1;
    int i;
    for(i=1;i<=n;i++)
        {
            fact = fact*i;
        }
        return fact;
}

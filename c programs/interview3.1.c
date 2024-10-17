#include<stdio.h>
void main()
{
    int a[10],n,amount,count = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=0;
    scanf("%d",&amount);
    while(amount!=0)
    {
        if(amount-a[j]>=0)
        {
            amount = amount - a[j];
            count++;
        }
        j++;
    }
    printf("%d",count);
}

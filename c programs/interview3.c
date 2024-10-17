#include<stdio.h>
void main()
{
    int a[10],n,amount,i,count=0,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    scanf("%d",&amount);
    while(amount!=0)
    {
        if(amount - a[j]>=0)
        {
            amount = amount - a[j];
            count++;
        }
        else
            j++;

    }
    printf("%d",count);

}

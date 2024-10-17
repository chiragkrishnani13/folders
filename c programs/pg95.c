#include<stdio.h>
int main()
{
    int a[100];
    int i,n,x,count=0;
    printf("enter no of numbers:");
    scanf("%d",&n);
    printf("Enter elements one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }printf("\n");
    printf("Enter the element you want:");
    scanf("%d",&x);
    for(i=0;i<=n;i++)
    {
        if(a[i]==x)
        {
            count++;
            printf("at index %d\n",i);
        }
    }
    if(count==0)
    {
        printf("%d is not prsent in the array",x);
    }
    else
    {
        printf("%d prsent is in the array",x,count);

    }
}

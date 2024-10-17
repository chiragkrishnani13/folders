#include<stdio.h>
int main()
{

    int a[100];
    int j,i,n,x,count=0,temp;
    printf("enter no of numbers:");
    scanf("%d",&n);
    printf("Enter elements one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }printf("\n");
    printf("the orignal array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }printf("\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[i]<a[i+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1] = temp;

            }
        }
    }
    printf("sorted araay is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,x,count=0;

    printf("enter no of numbers:");
    scanf("%d",&n);

    printf("Enter elems one by one:");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(arr[i]== x)
        {
            count++;

        }
    }
    if(count != 1)
    {
        printf("%d is prsent %d times",x,count);
    }
}

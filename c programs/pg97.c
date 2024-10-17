#include<stdio.h>
int main()
{
    int a[100];
    int n,i,j,temp;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter intergers one by one:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("orginal array is :");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

    }
            printf("\n");

    printf("sorted array is:");
        for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

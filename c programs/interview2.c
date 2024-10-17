#include<stdio.h>
void main()
{
    int a[10],n,i,sum = 0,flag = 0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min = a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            //printf("%d",a[i]);
            min=a[i];
        }
        if(a[i]<0)
        {
            flag = 1;
            sum+=a[i];
        }

    }
    if(flag==1)
    {
       printf("minimum sum:%d",sum);
    }
    else
    {
            printf("minium sum:%d",min);
    }
}

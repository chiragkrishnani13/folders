#include<stdio.h>
void main()
{
    int a[10],n,sum,first=0,last,k;
    scanf("%d",&n);
    //printf("%d",n);
    last = n-1;
    int flag = 0;
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    scanf("%d",&sum);

    for(k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
    while(first!=last)
    {

        if(a[first]+a[last]<sum)
        {
            first++;

        }
         else if (a[first]+a[last)>sum)
        {
            last--;

        }
         else if (a[first]+a[last]==sum)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("no");
    }
    else{
        printf("yess");
    }

}

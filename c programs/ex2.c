#include<stdio.h>
void main()
{
    int a[10],n,sum,first=0,last,k,x=0,y=0;
    scanf("%d",&n);
    //printf("%d",n);
    last = n-1;
    int flag = 0;
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    scanf("%d",&sum);
    while(first<=last)
    {

        if(a[first]+a[last]<sum)
        {
            first++;

        }
         else if (a[first]+a[last]>sum)
        {
            last--;

        }
         else if (a[first]+a[last]==sum)
        {
            if(a[first]==x && a[last]==y)
            {
                first++;
                last--;
            }
            else
            {
                printf("%d\n",a[first]);
                printf("%d\n",a[last]);
                x = a[first];
                y = a[last];
            }





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

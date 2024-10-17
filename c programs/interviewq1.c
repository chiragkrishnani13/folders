#include<stdio.h>
void checkArray(int a[],int first,int last,int sum)
{
    int n = last;
    while( first!= n+1 && last!=-1 )
    {
    //i  first!=last

        if (a[first]+a[last] > sum)
        {
            last--;
        }
         else if(a[first]+a[last]<sum)
        {
           first++;
        }
        else if(a[first]+a[last] == sum)
        {
           // ii printf("%d\n",a[first]);
            // printf("%d\n",a[last]);
            printf("%d\n",a[first]);
            printf("%d\n",a[last]);

            printf("\n------");
            printf("\n");
            first++;
            last--;

        }
    }
}
void main()
{
    int a[10];
    int n,i;
    int first,last,sum;
    printf("Enter n");
    scanf("%d",&n);
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    first=0;
    last=n-1;
    scanf("%d",&sum);
    checkArray(a,first,last,sum);




}

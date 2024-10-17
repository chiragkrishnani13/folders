
#include<stdio.h>
void minMax(int a[],int n,int *max,int *min)
{
    int i,j;

    for(i = 0;i<n;i++)
    {
        if(*max<a[i])
        {
            *max = a[i];

        }
        if (*min>a[i])
        {
            *min = a[i];
        }
    }

}
void main()
{
    int a[100];
    int n,i;
    int max;
    int min;
    int *q = &min;
    int *p = &max;


    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    min = a[0];
    max = a[0];
    minMax(a,n,&max,&min);
    printf("%d\n",max);
    printf("%d\n",min);

}

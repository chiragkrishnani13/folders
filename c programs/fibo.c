#include<stdio.h>
int main()
{
    int i,t,f=0,s=1,n;
    scanf("%d",&n);
    printf("%d\t%d\t",f,s);
    for(i=3;i<=n;i++)
    {
        t=f+s;
        f=s;
        s=t;
        printf("%d\t",t);
    }
    return 0;
}

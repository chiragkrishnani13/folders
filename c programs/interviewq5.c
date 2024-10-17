#include<stdio.h>
void main()
{
    int a[]={7,3,1,4,9,8},b[]={0,0,0,0,0,0},i,j,min,index,rank=0;
    for(i=0;i<6;i++)
    {
        min = 9,index = 0;
        for(j=0;j<6;j++)
        {
            if(min>a[i] && b[i]==0)
            {
                min = a[i];
                index = i;
            }
        }
        rank++;
        b[index]= rank;

    }
    for(i=0;i<6;i++)
    {
        printf("%d\t",b[i]);
    }
}

#include<stdio.h>
int maxNum(int a[],int n,int startingIndex)
{
    int max = 0,i;
    for(int i =startingIndex;i<n;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    return max;
}
void main()
{
  int n,max,a[10];
  scanf("%d",&n);
  for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  for(int i = 0;i<n;i++)
  {
      max = maxNum(a,n,i);
      printf("%d\t",max);

  }
}

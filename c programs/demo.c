#include<stdio.h>
int main()
{
    int a[50],b[50],c[50],n1,n2,n3;
    void inputArray(int [],int);
    void printArray(int [],int);
    void intersection(int [],int [],int,int);
    void mergearray(int [],int [],int [],int,int);
    scanf("%d",&n1);
    inputArray(a,n1);
    scanf("%d",&n2);
    inputArray(b,n2);
    n3=n1+n2;
    mergearray(a,b,c,n1,n2);
    printArray(c,n3);
  return 0;
}
void inputArray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void mergearray(int a[],int b[],int c[],int n1,int n2)
{
    int i,k;
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    k=n1;
    for(i=0;i<n2;i++)
    {
        c[k]=b[i];
        k++;
    }
}
void printArray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

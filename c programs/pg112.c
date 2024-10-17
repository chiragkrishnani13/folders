#include<stdio.h>
int main()
{
    int a[8],b[7],c[15];
    void inputArray(int []);
    void inputArray1(int []);
    void printArray(int []);
    void merrageArray(int [],int [],int []);
    printf("Enter elments of arry one");
    inputArray(a);
    printf("Enter elments of arry Two");
    inputArray1(b);

    sorrtArray(a);
    sorrtArray(b);

    merrageArray(a,b,c);

    printArray(a);
    printArray(b);
    printArray(c);
    return 0;

}
void inputArray(int a[])
{
    int i;
  for(i = 0;i<8;i++)
  {
      scanf("%d",&a[i]);
  }
}
void inputArray1(int a[])
{
    int i;
  for(i = 0;i<7;i++)
  {
      scanf("%d",&a[i]);
  }
}
void printArray(int [])
{

}
void merrageArray(int [],int [],int []);

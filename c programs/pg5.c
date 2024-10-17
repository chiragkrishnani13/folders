#include<stdio.h>
int main()
{
    int x,y,z,max;
    printf("Enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    max=(x>y && x>x)?x:(y>z)?y:z;
    printf("Your greatest No. is %d",max);

}

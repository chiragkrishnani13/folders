#include<stdio.h>
void fun(int x)
{
    switch(x)
    {
        case 1:printf("Modak\n");break;
        case 2:printf("halwa\n");break;
        case 3:printf("Ladoo\n");break;
        case 4:printf("peda\n");break;
        case 5:printf("barfi\n");break;
        case 6:printf("pooran poli\n");break;
        case 7:printf("shrikand\n");break;
    }
}
int main()
{
    int a[100];
    int n,sweet=0,i;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(sweet!=a[i])
        {
            sweet = a[i];
            fun(a[i]);
        }
    }

}

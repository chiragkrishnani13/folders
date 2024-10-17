#include<stdio.h>
int main()
{
    int m1,n1,m2,n2;
    int a[10][10],b[100][10],c[10][10];

    void input(int [][10],int,int);
    void display(int [][10],int,int);
    void add(int [][10],int [][10],int [][10],int,int);

    printf("Enter order of matrix A:");
    scanf("%d%d",&m1,&n1);

    printf("Enter order of matrix B:");
    scanf("%d%d",&m2,&n2);

    if(m1==m2 && n1 == n2)
    {
        printf("Enter matrix A:");
        input(a,m1,n1);

        printf("Enter matrix B:");
        input(b,m2,n2);

        printf("matrix A:");
        display(a,m1,n1);

         printf("matrix B:");
        display(b,m1,n1);

        add(a,b,c,m1,n1);

        printf("Addtion matrix:");
        display(c,m1,n1);


    }
    return 0;
}
void input(int a[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display(int a[][10],int m,int n)
{
   int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }
}
void add(int a[][10],int b[][10],int c[][10],int m,int n)
{
int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}



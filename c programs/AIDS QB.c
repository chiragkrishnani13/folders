#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],f[10][10],g[10][10],h[10][10],i[10][10];
    int m1,n1,m2,n2;
    void inputMatrix(int [][10],int,int);
    void printMatrix(int [][10],int,int);
    void add(int[][10],int[][10],int[][10],int,int);
    void read_matrix(int[][10],int,int);
    void display_matrix(int[][10],int,int);
    void multiply_matrix(int[][10],int[][10],int[][10],int,int,int);
    void transpose(int e[][10],int g[][10],int ,int);

    printf("Enter number of rows and columns for matrix A:");
    scanf("%d%d",&m1,&n1);
    printf("Enter number of rows and columns for matrix B:");
    scanf("%d%d",&m2,&n2);
    printf("Enter number of rows and columns for matrix C:");
    scanf("%d%d",&m3,&n3);
    printf("Enter number of rows and columns for matrix D:");
    scanf("%d%d",&m4,&n4);

    if(m1==m2 && n1==n2)
    {
        printf("Enter elements of matrix A");
        inputMatrix(a,m1,n1);

        printf("Enter elements for matrix B");
        inputMatrix(b,m2,n2);
        add(a,b,e,m1,n1);

        printf("Matrix A:\n");
        printMatrix(a,m1,n1);

        printf("Matrix B:\n");
        printMatrix(b,m1,n1);

        printf("Addition Matrix\n");
        printMatrix(e,m1,n1);
    }
    else
       {
        printf("Addition of matrix is not possible");
       }
      if(n1==m2)
       {
           printf("Enter elements of matrix C");
           read_matrix (c,m1,n1);
           printf("Enter elements of matrix D");
           read_matrix (d,m2,n2);
           multiply_matrix(c,d,f,m1,n1,n2);
           printf("Matrix C\n");
           display_matrix(c,m1,n1);
           printf("Matrix D\n");
           display_matrix(d,m2,n2);
           printf("Multiplication Matrix\n");
           display_matrix(f,m1,n2);
       }
       else{
        printf("Matrix multiplication not possible");
       }
// transpose
       transpose(e, g, m1, n1);
       printf("Transpose Matrix:\n");
       display_matrix(g, n1, m1);
//square
multiply_matrix(f,f,h,m1,n1,n2);
 printf("Multiplied Matrix:\n");
 display_matrix(h,m1,n2);

 multiply_matrix(g,h,i,m1,n1,n2);
 printf("Multiplied Matrix:\n");
 display_matrix(i,m1,n2);


       return 0;
}
void inputMatrix(int a[][10],int m,int n)
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
void printMatrix(int a[][10],int m,int n)
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

    void add(int a[][10],int b[][10],int e[][10],int m,int n)
    {
        int i,j;
        for(i=0;i<m;i++)
             {
            for(j=0;j<n;j++)
            {
                e[i][j]=a[i][j]+b[i][j];
            }
        }
    }

     void read_matrix(int a[][10],int m,int n)
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
     void display_matrix(int a[][10],int m,int n)
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
  void multiply_matrix(int c[][10],int d[][10],int f[][10],int m1,int n1,int n2)
    {
        int i,j,k;
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                f[i][j]=0;
                for(k=0;k<n1;k++)
                {
                    f[i][j]=f[i][j]+c[i][k]*d[k][j];
                }
            }
        }
    }
    void transpose(int e[][10],int g[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            g[j][i]=e[i][j];
        }
    }
}

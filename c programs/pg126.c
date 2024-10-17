#include<stdio.h>
int main()
{
    int arr[10][10],m,n;
    void inputArray(int [][10],int,int);
    void printArray(int [][10],int,int);
    void sumArray(int [][10],int,int);
    printf("Enter order:");
    scanf("%d%d",&m,&n);
    printf("Enter elems one by one:");
    inputArray(arr,m,n);
    printArray(arr,m,n);
    printf("modified Array\n");
    sumArray(arr,m,n);
    printArray(arr,m+1,n+1);

    return 0;
}
void inputArray(int arr[][10],int m,int n)
{
    int i,j;
    for(i =0;i<m;i++){
        for(j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void printArray(int arr[][10],int m,int n)
 {
     int i,j;
    for(i =0;i<m;i++){
        for(j =0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
 }
void sumArray(int arr[][10],int m,int n)
{
    int i,j,sum = 0,sum1 =0;
    for(i = 0;i<m;i++){
            sum =0;
        for(j=0;j<n;j++){
            sum += arr[i][j];
        }
        arr[i][j] = sum;
    }
    n+=1;
    //sum =0;
    for(i =0;i<n;i++){
            sum1 =0;
        for(j=0;j<m;j++)
        {
            sum1+=arr[j][i];
        }
        arr[j][i] = sum1;
    }
    n+=1;

}




#include<stdio.h>
int main()
{
    int arr[10][10],arr2[10][10],m,n,i,j,m1,n1;
    printf("Enter the order of matrix m & n:");
    scanf("%d%d",&m,&n);

    printf("Enter Elements one by one:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("orignal Array\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    //m1 = n;
    //n1 = m;
    //printf("%d\n",m1);
    //printf("%d\n",n1);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        arr2[j][i] = arr[i][j];
    }
}
printf("Modified array\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d\t",arr2[i][j]);

    }

    printf("\n");
}
    return 0;
}


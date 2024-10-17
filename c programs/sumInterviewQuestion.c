#include<stdio.h>
int main()
{
    int i;
    int sum = 16;
    int a[] = {8,3,2,1,7,8
    };
    int n=6;
    int b[9] = {0};
   for(i=0;i<n;i++)
    {
        int temp = sum - a[i];
        if(sum - a[i]>=10)
        {
            continue;
        }
        else
        {
            b[a[i]] = 1;
            if(b[temp] == 1)
            {
                printf("yes");
                break;
            }
        }
    }
}

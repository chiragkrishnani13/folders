#include<stdio.h>
int main()
{
    int n,i,x,cp=0,cn=0,cz=0,sp=0,sn=0,avgp,avgn;
    printf("Enter no of numbers:");
    scanf("%d",&n);

    printf("Enter number one by one\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>0)
        {
            cp++;
            sp=sp+x;
        }
        else if(x<0)
        {
            cn++;
            sn=sn+x;
        }
        else
        {
          cz++;
        }

    }
    printf("sum of postive integers is %d\n",sp);
    printf("count of postive integers is %d\n",cp);
    if(cp!=0)
    {
        printf("Average of postive integer is %f\n",(float)sp/cp);
    }
    printf("sum of negative integers is %d\n",sn);
    printf("count of negative integers is %d\n",cn);
    if(cn!=0)
    {
        printf("Average of negative integers is %f\n",(float)sn/cn);
    }
    printf("count of zeros are %d",cz);








    return 0;
}

#include<stdio.h>
int main()
{
    char option;
    int x,y,m,sum;
    do
    {
        printf("press +: for Addtion \n");
        printf("press -: for Subtraction \n");
        printf("press *: for Multiplication \n");
        printf("press /: for Division \n");
        printf("press %%: for modulus \n");
        printf("press Q/q: for Quit \n");

        printf("Enter option:");
        fflush(stdin);
        scanf("%c",&option);

        if('+' == option || '-'==option || '*'==option || '/'==option || '%'==option)
        {
            printf("Enter two numbers:");
            scanf("%d%d",&x,&y);
        }

        switch(option)
        {
           case '+' :sum = x+y;
                printf("Addtion =%d\n",sum);
                break;

        case '-' :sum = x-y;
                printf("Subtraction =%d\n",sum);
                break;
        case'*' :sum = x*y;
                printf("Multiplaction =%d\n",sum);
                break;

        case'/' :if(y==0)
        {
            printf("Answer of Division is Infinty");
        }
        else
        {


            sum =(float) x/(float)y;
                printf("Division =%f\n",sum);
                break;
        }
        case'%' :m = x%y;
                printf("Modolus =%d\n",m);
                break;

        }

    }while(option!='q' && option!='Q');





    return 0;
    }

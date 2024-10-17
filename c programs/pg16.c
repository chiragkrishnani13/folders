#include<stdio.h>
int main()
{

    char ch;
    int n1,n2,m;
    float ans;
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("%% : Modolous\n");


    printf("Enter your option:");
    scanf("%c",&ch);
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='%')
    {
        printf("Enter two numbers");
        scanf("%d%d",&n1,&n2);
        switch(ch)
        {
            case '+':ans=n1+n2;
                    printf("Addtion =%f",ans);
                    break;
            case '-':ans=n1-n2;
                    printf("Subtraction =%f",ans);
                    break;
            case '*':ans=n1*n2;
                    printf("multiplaction is =%f",ans);
                    break;
            case '/':if(n2!=0)
                    {
                        ans=(float)n1/n2;
                        printf("Division =%f",ans);
                    }


                    else
                    {
                        printf("infinty");
                    }
                    break;
            case '%':m=n1%n2;
                    printf("Modolus=%d",m);
                    break;
        }

    }
     else{
            printf("Option Invalid");
        }

  return 0;
}

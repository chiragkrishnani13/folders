
#include<stdio.h>
int  main()
{
    printf("1:Addition\n");
    printf("2:Subtraction\n");
    printf("3:Multiplication\n");
    printf("4:Division\n");
    int option,a,b;
    printf("Enter option:");
    scanf("%d",&option);
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    switch(option)
    {
        case 1:printf("Addition is %d",a+b);
        break;
        case 2:printf("Subtraction is %d",a-b);
        break;
        case 3:printf("Multiplication is %d",a*b);
        break;
        case 4:printf("Division is %f",(float)a/b);
        break;
    }

}

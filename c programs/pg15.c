#include<stdio.h>
int main()
{
  int x;
    printf("Enter Number:");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("January");
        break;
        case 2:printf("Febuary");
        break;
        case 3:printf("march");
        break;
        case 4:printf("April");
        break;
        case 5:printf("may");
        break;
        case 6:printf("june");
        break;
        case 7:printf("july");
        break;
        case 8:printf("august");
        break;
        case 9:printf("september");
        break;
        case 10:printf("october");
        break;
        case 11:printf("november");
        break;
        case 12:printf("december");
        break;
        default : printf("invalid Month number");

    }
    return 0;
}

#include<stdio.h>
struct Date
{
    int dd;
    int mm;
    int yyyy;
};
int main()
{
    struct Date d[10];
    printf("Enter dat1 in format dd/mm/yyyy");
    scanf("%d%d%d",d[0].dd,d[0].mm,d[0].yyyy);

    printf("Enter dat1 in format dd/mm/yyyy");
    scanf("%d%d%d",d[1].dd,d[1].mm,d[1].yyyy);

    if(d[1].yyyy<d[0].yyyy)
    {
        printf("date 2 comes first");
    }
    else if(d[1].yyyy>d[0].yyyy)
    {
        printf("date 1 comes first");
    }
    else if(d[1].yyyy==d[0].yyyy)
    {
        if(d[1].mm<d[0].mm)
        {
            printf("date 2 comes earlier");
        }
        else if(d[1].mm>d[0].mm)
        {
            printf("date 1 comes earlier");
        }
        else if(d[1].mm==d[0].mm)
        {
            if(d[1].dd<d[0].dd)
            {
                printf("date 2 comes earlier");
            }
            else if(d[1].dd>d[0].dd)
            {
                printf("date 2 comes earlier");

            }
            else{
                printf("boyhs dates are similar");
            }
        }
    }
    else if(d[1].yyyy>d[0].yyyy)
    {
        printf("date 1 comes earlier");
    }
}

#include<stdio.h>
struct Employee
{
    char ename[25];
    int eid;
    float esalary;
};
int main()
{
    struct Employee e[50];
    int n;
    void inputDetails (struct Employee[],int);
    void printDetails (struct Employee[],int);

    printf("Enter no of employees");
    scanf("%d",&n);
    inputDetails(e,n);
    printDetails(e,n);
    return 0;
}
void inputDetails (struct Employee e[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
       printf("Enter Employee name:");
       fflush(stdin);
       gets(e[i].ename);
       printf("Enter id:");
       scanf("%d",&e[i].eid);
       printf("Enter salary:");
       scanf("%f",&e[i].esalary);

    }

}
void printDetails (struct Employee e[],int n)
{
    int i;
    printf("Name                     id    salary\n");
    for(i=0;i<n;i++)
    {
        printf("%-25s%2d    %-9.2f\n",e[i].ename,e[i].eid,e[i].esalary);
    }
}

#include<stdio.h>
struct employee
{
   char ename[25];
   int eid;
   float esalary;
};
int main()
{
    struct employee e[100];
    int n;
    void inputDetails(struct employee [],int);
    void printDetails(struct employee[],int);
    void sortId(struct employee[],int);


    printf("Enter no employess:\n");
    scanf("%d",&n);
    printf("Enter the details of employee one by one:\n");
    inputDetails(e,n);
    sortId(e,n);
    printDetails(e,n);
    return 0;
}
void inputDetails(struct employee e[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter id:");
        scanf("%d",&e[i].eid);
        fflush(stdin);
        printf("Enter name:");
        gets(e[i].ename);
        printf("Enter salary:");
        scanf("%f",&e[i].esalary);
    }
}
void printDetails(struct employee e[],int n)
{
    int i;
    printf("Name                     Id    salary\n");
    for(i = 0; i<n;i++)
    {
      printf("%-25s%02d    %-9.2f\n",e[i].ename,e[i].eid,e[i].esalary);
    }
}
void sortId(struct employee e[],int n)
{
    int i,j;
    struct employee temp;
    for(i = 0;i<n-1;i++)
    {
        for(j =0;j<n-1-i;j++)
        {
                  if(e[j].eid > e[j+1].eid)
                  {
                      temp = e[j];
                     e[j]  = e[j+1];
                     e[j+1] = temp;

                  }
        }

    }
}

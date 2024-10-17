#include<stdio.h>
struct Date
{
    int dd,mm,yyyy;
};
struct Employee
{
    int ecode;
 char ename[25];
float esalary;
 struct Date doj;
};
int main()
{
    struct Employee e[10];
    int n;
    void inputDetails(struct Employee [],int);
    void printDetails(struct Employee [],int);
    printf("Enter no of Employees:");
    scanf("%d",&n);
    printf("Enter details one by one:");
    inputDetails(e,n);
    printDetails(e,n);
    return 0;

}
 void inputDetails(struct Employee e[],int n)
 {
   int i;
   for(int i = 0;i<n;i++)
   {
        printf("Enter Id");
        scanf("%d",&e[i].ecode);
        fflush(stdin);
        printf("Enter Name:");
        gets(&e[i].ename);
        printf("Enter Salary:");
        scanf("%f",&e[i].esalary);
        printf("Enter date in format dd/mm/yyyy");
        scanf("%d%d%d",e[i].doj.dd,e[i].doj.mm,e[i].doj.yyyy);
   }
 }
void printDetails(struct Employee e[],int n)
{
  printf("Code    Name                       Salary    Date of joining");
  int i;
  for(int i =0;i<n;i++)
  {
      printf("%4d %-25s %-9.2f %02d/%2d/%04d",e[i].ecode,e[i].ename,e[i].esalary,e[i].doj.dd,e[i].doj.mm,e[i].doj.yyyy);
  }
}

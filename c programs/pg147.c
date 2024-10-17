#include<stdio.h>
struct Date
{
    int dd,mm,yyyy;
};
struct hospital
{
    char firstname[25];
    char surname[25];
    struct Date dob;
    char disease[25];
    char diseaseAsk[25];
};
int main()
{
   struct hospital h[50];
   int n;
   void inputDetails(struct hospital[],int);
   void printDetails(struct hospital[],int);
   printf("Enter no of patients:\n");
   scanf("%d",&n);
   printf("Enter details one by one:\n");
   inputDetails(h,n);
   printf("Enter the disease you want to search");
   fflush(stdin);
   gets(&h[0].diseaseAsk);
   printDetails(h,n);
}
void inputDetails(struct hospital h[],int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("Enter first name:");
        fflush(stdin);
        gets(&h[i].firstname);
        fflush(stdin);
        printf("Enter surnamr:");
        gets(&h[i].surname);
        fflush(stdin);
        printf("Enter Date of birth in dd/mm/yyyy format");
        scanf("%d%d%d",&h[i].dob.dd,&h[i].dob.mm,&h[i].dob.yyyy);
        printf("Enter disease name");
        fflush(stdin);
        gets(&h[i].disease);

    }
}
void printDetails(struct hospital h[],int n)
{
    int i;
    printf("Name                     Surname                  DateOfBirth    Diseseae Name\n");
    if(strcpy(h[i].disease,h[0].diseaseAsk))
    {
        printf("%-25s%-25s%02d/%02d/%04d    %-25s\n",h[i].firstname,h[i].surname,h[i].dob.dd,h[i].dob.mm,h[i].dob.yyyy,h[i].disease);
    }
}

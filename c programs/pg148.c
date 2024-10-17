#include<stdio.h>
struct student
{
    int rollNo;
    int pm;
    int cm;
    int mm;
    double avg;
};
int main()
{
    struct student s[60];
    int n;
    void inputDetails (struct student [],int);
    void printDetails (struct student [],int);
    void average(struct student [], int );
    printf("Enter no of Students:\n");
    scanf("%d",&n);
    printf("Enter details of student one by one:\n");
    inputDetails(s,n);
    average(s,n);
    printDetails(s,n);
}
void inputDetails (struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter Roll No");
        scanf("%d",&s[i].rollNo);
        printf("Enter Phyics Marks:");
        scanf("%d",&s[i].pm);
        printf("Enter Chemistry Marks:");
        scanf("%d",&s[i].cm);
        printf("Enter Maths Marks:");
        scanf("%d",&s[i].mm);
    }
}
void printDetails (struct student s[],int n)
{
    int i;
    printf("Roll No    PhyicsMarks    ChemistryMarks    MathsMarks    Average\n");
    for(i=0;i<n;i++)
    {
        printf("%-07d    %11d    %13d    %10d     %7.2f\n",s[i].rollNo,s[i].pm,s[i].cm,s[i].mm,s[i].avg);
    }
}
void average(struct student s[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        s[i].avg=(s[i].pm+s[i].cm+s[i].mm)/3.0;
    }
}

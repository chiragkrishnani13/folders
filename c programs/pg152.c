#include<stdio.h>
struct student
{
    int sRollNo;
    char sname[25];
    int sTotalMarks;
};
int main()
{
    struct student s[50];
    int n;
    void inputDetails(struct student[],int);
    void printDetails(struct student[],int);
    void sortMarks(struct student[],int);
    printf("Enter the no of students:\n");
    scanf("%d",&n);
    printf("Enter details one by one\n");
    inputDetails(s,n);
    sortMarks(s,n);
    printDetails(s,n);

    return 0;
}
void inputDetails(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter name of student:");
        fflush(stdin);
        gets(&s[i].sname);
        printf("Enter Roll No:");
        scanf("%d",&s[i].sRollNo);
        printf("Enter Total Marks:");
        scanf("%d",&s[i].sTotalMarks);
    }
}
void printDetails(struct student s[],int n)
{
    int i;
    printf("Name                     RollNo    TOtalMarks\n");
    for(i = 0;i<n;i++)
    {
        printf("%-25s%6d    %10d\n",s[i].sname,s[i].sRollNo,s[i].sTotalMarks);
    }
}
void sortMarks(struct student s[],int n)
{
    struct student temp;
    int i,j;
    for(i = 0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(s[j].sTotalMarks<s[j+1].sTotalMarks)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

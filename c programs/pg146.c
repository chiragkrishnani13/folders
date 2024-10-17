#include<stdio.h>
struct cricket
{
    char pname[25];
    int page;
    int pNoOfMatchesPlayed;
    int pNoOfRuns;
    float avg;
};
int main()
{
    struct cricket c[100];
    int n;
    void inputDetails(struct cricket[],int);
    void printDetails(struct cricket[],int);
    printf("Enter no Players:\n");
    scanf("%d",&n);
    printf("Enter Details one by one:\n");
    inputDetails(c,n);
    printDetails(c,n);

}
void inputDetails(struct cricket c[],int n)
{
   int i;
    for(i=0;i<n;i++)
    {
        printf("Enter name");
        fflush(stdin);
        gets(c[i].pname);
        printf("Enter age");
        scanf("%d",&c[i].page);
        printf("Enter Number of Matches PLayed");
        scanf("%d",&c[i].pNoOfMatchesPlayed);
        printf("Enter Runs");
        scanf("%d",&c[i].pNoOfRuns);
        printf("Enter average");
        scanf("%f",&c[i].avg);
    }
}
void printDetails(struct cricket c[],int n)
{
    int i;
    printf("Name                     Age    Matches Played    Runs    Average\n");
    for(i = 0;i<n;i++)
    {
        printf("%-25s %-02d    %14d   %5d     %7.2f\n",c[i].pname,c[i].page,c[i].pNoOfMatchesPlayed,c[i].pNoOfRuns,c[i].avg);
    }
}

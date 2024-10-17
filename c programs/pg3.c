#include<stdio.h>
int main()
{
    float p;
     printf("Enter your percentage:");
     scanf("%f",&p);
     if (p>100 || p<0){
        printf("Invalid Data");

     }
     else if(p>70){
        printf("Distincation");

     }
     else if (p>60){
        printf("Pass class");
     }
     else if (p>=50)
     {
         printf("second class");
     }
     else if (p>40)
     {
     printf("pass class");
     }
     else
     {
         printf("you failed");
     }
     return 0;
}


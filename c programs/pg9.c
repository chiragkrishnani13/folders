#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,root1,root2,rp,ip;
    printf("enter three numbers");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("It is linear equation");
        printf("root %f",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if(d>0)
        {
            printf("Roots re real equal and distinct\n");
            root1 = (-b+sqrt(d)/(2*a));
            root2 = (-b-sqrt(d)/(2*a));
            printf("Root1 is %f\n",root1);
            printf("Root2 is %f\n",root2);


        }
        else if(d==0)
        {
            printf("Roots are real and equal\n");
            root1=-b/(2*a);
            printf("both Roots are %f\n",root1);
        }
        else
        {
            printf("roots are complex\n");
            rp=b/(2*a);
            ip=(-d)/(2*a);
            printf("root1 is %f + i %f\n",rp,ip);
            printf("root2 is %f - i %f\n",rp,ip);

        }
    }

    return 0;
}

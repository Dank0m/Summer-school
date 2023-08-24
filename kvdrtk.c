#include <stdio.h>
#include <math.h>

double a,b,c;
double x1,x2,d;

int main()
{
    printf("Enter the a, b, c:\n");

    if (scanf("%lf %lf %lf",&a,&b,&c) != 3)
    {
        printf("Enter numbers, you dumb!\n");
    }

    if (a==0)
    {
        printf("This is not a square equation, you dumb!\n");
        exit(1);
    }

    d = (b*b) - 4*a*c;

    if (d<0)
        printf("The square equation has no solutions.\n");

    else
    {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);

        if (x1==x2)
            printf("The solution of the square equation is %g.\n",x1);

        else
            printf("The solutions of the square equation are %g, %g.\n",x1,x2);
    }
}

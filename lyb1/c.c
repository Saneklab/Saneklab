#include <stdio.h>
#include <math.h>

int main (void)
{
    float x,a,G,F,Y;
    printf("Введите x: ");
    scanf("%f" , &x);
    printf("Введите a: ");
    scanf("%f" , &a);

    G=(-5*(a*a+a*x-2*x*x))/(20*a*a+41*a*x+20*x*x);
    printf("G=%f\n",G);

    F=cos(a*a+2*a*x-3*x*x);
    printf("F=%f\n",F);

    Y=acos(-45*a*a-8*a*x+21*x*x+1);
    printf("Y=%f\n",Y);
}


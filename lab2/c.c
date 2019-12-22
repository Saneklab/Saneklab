#include <stdio.h>
#include <math.h>

int main (void)
{
    float x,a,v,G,F,Y;
    printf("Введите x: ");
    scanf("%f",&x);
    printf("Введите a: ");
    scanf("%f",&a);
    printf("Введите значение: ");
    scanf("%f",&v);

    if (v==1) {
        G=(-5*(a*a+a*x-2*x*x))/(20*a*a+41*a*x+20*x*x);
        if ((20*a*a+41*a*x+20*x*x) == 0){
            printf("Error\n");
        }
        else {
            printf("G=%f\n",G);
        }
    }
    else if (v==2){
        F=cos(a*a+2*a*x-3*x*x);
        printf("F=%f\n",F);
    }
    else if (v==3) {
        Y=acos(-45*a*a-8*a*x+21*x*x+1);
        printf("Y=%f\n",Y);
    }
    else {
        printf("Error\n");
    }
}


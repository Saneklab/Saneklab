#include <stdio.h>
#include <math.h>
int main (void) {
    float x,a,v,s,h,j,G,F,Y;
    printf("Введите x: ");
    scanf("%f",&x);
    printf("Введите a: ");
    scanf("%f",&a);
    printf("Введите значение: ");
    scanf("%f",&v);
    printf("Сколько считать?: ");
    scanf("%f",&s);
    printf("Введите шаг: ");
    scanf("%f",&h);
    j=0; while (j==0){
    if (v==1) {
        for(;s;){
           G=(-5*(a*a+a*x-2*x*x))/(20*a*a+41*a*x+20*x*x);
        if ((20*a*a+41*a*x+20*x*x) == 0){
            printf("Error\n");
        }
        else {
            printf("G=%f\n",G);
            a+=h;
            break;
        }
        }
    }
    else if (v==2){
        for(;0,F>=-1 && F<=1,s;){
            F=cos(a*a+2*a*x-3*x*x);
            printf("F=%f\n",F);
            a+=h;
            break;
        }
    }
else if (v==3) {
        for (;0,Y>=-1 && Y<=1,s;){
            Y=acos(-45*a*a-8*a*x+21*x*x+1);
            printf("Y=%f\n",Y);
            a+=h;
            break;
        }
    }
    else {
        printf("Error\n");
    }
    printf("Продолжить/выйти\n");
    printf("продолжить - введите 0\n");
    printf("выйти - введите 1\n");
    scanf("%f",&j);
}
}

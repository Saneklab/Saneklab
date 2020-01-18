#include <stdio.h>
#include <math.h>
int main (void) {
    float x,a,v,s,h,j,G,F,Y;
    float listG[100],listF[100],listY[100],listG_max=-10,listF_max=-10,listY_max=-10;
    int i,c,p;
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
    j=0;
    c=0;
    for (i=0;i<1;i++)
        while (j==0){
        if (v==1) {
            for(;s;){
               G=(-5*(a*a+a*x-2*x*x))/(20*a*a+41*a*x+20*x*x);
            if ((20*a*a+41*a*x+20*x*x) == 0){
                printf("Error\n");
            }
            else {
                if (listG_max<G)
                {
                    listG_max=G;
                }
                listG[i]=G;
                printf("G=%f\n",G);
                x+=h;
                a+=h;
                c+=1;
                break;
            }
            }
        }
        else if (v==2){
            for(;0,F>=-1 && F<=1,s;){
                F=cos(a*a+2*a*x-3*x*x);
                if(listF_max<F)
                {
                    listF_max=F;
                }
                listF[i]=F;
                printf("F=%f\n",F);
                x+=h;
                a+=h;
                c+=1;
                break;
            }
        }
        else if (v==3) {
            for (;0,Y>=-1 && Y<=1,s;){
                Y=acos(-45*a*a-8*a*x+21*x*x+1);
                printf("Y=%f\n",Y);
                if(listY_max<Y)
                {
                    listY_max=Y;
                }
                listY[i]=Y;
                x+=h;
                a+=h;
                c+=1;
                break;
            }
        }
        else {
            printf("Error\n");
        }
        printf("Строка/таблица:");
        scanf("%d",&p);
        switch(p)
        {
            case 1:
                if (v==1);
                {
                    printf("Максимальный элемент: %d\n", listG_max);
                    printf("\n");
                    for (i=0;i<c;i++)
                        printf("%f\n",listG[i] );
                }
                if (v==2);
                {
                    printf("Максимальный элемент: %d\n", listF_max);
                    printf("\n");
                    for (i=0;i<c;i++)
                        printf("%f\n",listF[i] );
                }
                if (v==3);
                {
                    printf("Максимальный элемент: %d\n",listY_max);
                    printf("\n");
                    for (i=0;i<c;i++)
                        printf("%f\n",listY[i] );
                }
            case 2:
                if (v==1);
                {
                    for (i=0;i<c;i++)
                        printf("%f\n",listG[i]);
                }
                if (v==2);
                {
                    for (i=0;i<c;i++)
                        printf("%f\n",listF[i]);
                }
                if (v==3)
                {
                    for (i=0;i<c;i++)
                        printf("%f\n",listY[i]);
                }
        }        
        
        printf("Продолжить/выйти\n");
        printf("продолжить - введите 0\n");
        printf("выйти - введите 1\n");
        scanf("%f",&j);
    }
    }

from math import *
x=float(input('Введите x: '))
a=float(input('Введите a: '))
var=int(input('Введите значение: '))
s=int(input('Введите, сколько считать: '))
h=float(input('Введите шаг: '))
j = 0
while j == 0:
    if var==1:
        for i in range(s):
            G=(-5*(a**2+a*x-2*x**2))/(20*a**2+41*a*x+20*x**2)
            if (20*a**2+41*a*x+20*x**2)==0:
                print(Error)
            else:
                print(G)
                print()
                a+=h
    elif var==2:
        for i in range(s):
            F=cos(a**2+2*a*x-3*x**2)
            while ( F>=-1 and F<=1):
                print(F)
                print()
                a+=h
                break
            else:
                print('Не входит')
    elif var==3:
        if x==0.1:
            for i in range(s):
                Y=acos(-45*a**2-8*a*x+21*x**2+1)
                while (Y>= -1 and Y<= 1):
                    print(Y)
                    print()
                    a+=h
                    break
                else:
                    print('Не входит')
    else:
        print('Не входит')
    print('Продолжить/выйти')
    print('Продолжить - введите 0')
    print('Выйти - введите 1')
    j=int(input())

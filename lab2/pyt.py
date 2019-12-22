from math import *
x=float(input('Введите x: '))
a=float(input('Введите a: '))
var=int(input('Введите значение: '))

if var==1:
    G=(-5*(a**2+a*x-2*x**2))/(20*a**2+41*a*x+20*x**2)
    if (20*a**2+41*a*x+20*x**2)==0:
        print(Error)
    else:
         print(G)

elif var==2:
    F=cos(a**2+2*a*x-3*x**2)
    print(F)

elif var==3:
    Y=acos(-45*a**2-8*a*x+21*x**2+1)
    print(Y)

else:
    print('Ошибка')

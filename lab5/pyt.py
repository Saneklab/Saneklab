from math import *
x=float(input('Введите x: '))
a=float(input('Введите a: '))
var=int(input('Введите значение: '))
s=int(input('Введите, сколько считать: '))
h=float(input('Введите шаг: '))
template=float(input('Введите шаблон: '))
j = 0
listG=[]
listF=[]
listY=[]
listX=[]
listA=[]
while j == 0:
    if var==1:
        for i in range(s):
            G=(-5*(a**2+a*x-2*x**2))/(20*a**2+41*a*x+20*x**2)
            if (20*a**2+41*a*x+20*x**2)==0:
                print(Error)
            else:
                print(G)
                print()
                listG.append(G)
                listX.append(x)
                listA.append(a)
                a+=h
    elif var==2:
        for i in range(s):
            F=cos(a**2+2*a*x-3*x**2)
            while ( F>=-1 and F<=1):
                print(F)
                print()
                listF.append(F)
                listX.append(x)
                listA.append(a)
                a+=h
                break
            else:
                print('Не входит')
    elif var==3:
        for i in range(s):
            Y=acos(-45*a**2-8*a*x+21*x**2+1)
            while (Y>= -1 and Y<= 1):
                print(Y)
                print()
                listY.append(Y)
                listX.append(x)
                listA.append(a)
                a+=h
                break
            else:
                print('Не входит')
    else:
        print('Не входит')
    print('Как выводить : строка/таблица ')
    print('Если строка - введите 1')
    print('Если таблица - введите 2')
    output=int(input())
    if (output==1):
        if (var==1):
            print(listG)
            print(max(listG))
            print(min(listG))
        if (var==2):
            print(listF)
            print(max(listF))
            print(min(listF))
        if (var==3):
            print(listY)
            print(max(listY))
            print(min(listY))
    if (output==2):
        q=0
        if (var==1):
            for i in listG:
                print('x={} a={} g={}'.format(str(listX[q]),str(listA[q]),str(listG[q])))
                i += 1
                q += 1
        elif (var==2):
            for i in listF:
                print('x={} a={} f={}'.format(str(listX[q]),str(listA[q]),str(listF[q])))
                i += 1
                q +=1
        elif (var==3):
            for i in listY:
                print('x={} a={} y={}'.format(str(listX[q]),str(listA[q]),str(listY[q])))
                i += 1
                q +=1
        else:
            print('Error')
            
    else:
        print('Error')
    if var == 1:
        print('Количество совпадений с шаблоном: ' + str(listG.count(template)))
    elif var == 2:
        print('Количество совпадений с шаблоном: ' + str(listF.count(template)))
    elif var == 3:
        print('Количество совпадений с шаблоном: ' + str(listY.count(template)))
    else:
        print('ERROR')
    print()
    print('Продолжить/выйти')
    print('Продолжить - введите 0')
    print('Выйти - введите 1')
    j=int(input())

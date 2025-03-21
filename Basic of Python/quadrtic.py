from math import sqrt

print('the quadratic equation is ax^2+bx+c')
a=float(input('a: '))
b=float(input('b: '))
c=float(input('c: '))
D=(b*b-4*a*c)
if D>0:
    r1=(-b+sqrt(D))/(2*a)
    r2=(-b-sqrt(D))/(2*a)
    print('the roots are',r1,r2)
elif D==0:
    r3=-b/(2*a)
    print('the roots are',r3)
else:
    print('there are no roots')

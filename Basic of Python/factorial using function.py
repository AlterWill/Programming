def numinput():
    a=int(input("enter the number:"))
    return a

def factorial(a):
    fac=1
    for i in range(1,a+1):
        fac=fac*i
    return fac

a=numinput()
b=factorial(a)
print(b)
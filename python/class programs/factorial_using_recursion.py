def factorial(a):
    if a==1:
        return 1
    else:
        return a*factorial(a-1)
    
def numinput():
    a=int(input("enter the number:"))
    return a

a=numinput()
b=factorial(a)
print("The factorial of",a,"is",b)

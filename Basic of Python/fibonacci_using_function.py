def fibonacci(a):
    if a==0:
        return 0
    elif a==1:
        return 1
    else:
        return fibonacci(a-1)+fibonacci(a-2)

def numinput():
    a=int(input("enter the term:"))
    return a

a=numinput()
b=fibonacci(a)
print("The",a,"th term of the fibonacci series is ",b)
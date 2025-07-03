def product(a,b):
    if a==0 or b==0:
        return 0
    else:
        return a+product(a,b-1)
    

def numinput():
    a=int(input("enter the number:"))
    return a

a=numinput()
b=numinput()
pro=product(a,b)
print("The product of the two number",a,"and",b,"is",pro)
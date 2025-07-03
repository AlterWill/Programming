def sum_n_no(a):
    if a==1:
        return 1
    else:
        return a+sum_n_no(a-1)
    

def numinput():
    a=int(input("enter the number:"))
    return a

a=numinput()
b=sum_n_no(a)
print("The sum of ",a,"natural number is ",b)
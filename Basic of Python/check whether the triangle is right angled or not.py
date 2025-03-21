def check_right_angled(a,b,c):
    d=c**2
    e=(a**2)+(b**2)
    if d==e:
        print("It is a right angled triangle")
    else:
        print("It is not a right angled triangle")

def numinput():
    a=int(input("Enter the sides:"))
    return a

a=numinput()
b=numinput()
c=int(input("Enter the hypotusese:"))
check_right_angled(a,b,c)
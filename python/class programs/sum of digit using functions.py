def sum_digits(a):
    sum=0
    b=0
    while a!=0:
        b=a%10
        a//=10
        sum+=b
    print("The sum of digits of a is",sum)

def numinput():
    a=int(input("enter the number:"))
    return a

a=numinput()
sum_digits(a)
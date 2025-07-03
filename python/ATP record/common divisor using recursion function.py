def gcd(a,b):
    while b!=0:
        a,b=b,a%b
    return a

#euclidean method

a=int(input("Enter the number:"))
b=int(input("Enter the number:"))
c=gcd(a,b)
print("The greatest common divisor is",c)
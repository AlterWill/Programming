def gcd(a,b):
    while b!=0:
        a,b=b,a%b
    return a

def lcm(a,b):
    c=abs(a*b)/gcd(a,b)
    return c

d=int(input("Enter the first number:"))
e=int(input("Enter the second number:"))
g=lcm(d,e)
print(g)
p=int(input("Enter the princpial:"))
t=int(input("Enter the time:"))
r=int(input("Enter the interest rate:"))
a=p
for i in range(0,t):
    si=(p*r)/100
    p=p+si
b=p-a
print(b)
a=int(input("Enter the number:"))
n=a
c=0
while n!=0:
    b=n%10
    c+=b**3
    n=n//10
if c==a:
    print("Armstrong number")
else:
    print("not")
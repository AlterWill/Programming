a=int(input("Enter the number:"))
n=a
b=c=0
d=str(a)
for i in range(0,len(d)):
    c=n%10
    b=b*10+c
    n=n//10
print("The reverse of the number is:",b)
x=int(input("Enter the value of x:"))
n=int(input("Enter the value of n:"))
sum=0
for i in range(0,n):
    a=x**(2*i)
    if (2*i)==0:
        b=1
    else:
        b=2*i
    sum+=(a/b)
print("Enter the sum of the power series for x =",x,"and n =",n,"is",sum)
n=int(input("Enter the number of turns:"))
x=int(input("Enter the value of x:"))
a=0
sum=1
if n==0:
    sum=0
for i in range(1,n):
    t=x**(2*i)
    d=2*i
    b=t/d
    if a==1:
        sum+=b
        a=0
    else:
        sum-=b
        a=1
print(sum)
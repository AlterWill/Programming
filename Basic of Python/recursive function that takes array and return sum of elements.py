def sum(a):
    l=len(a)
    if l==0:
        return 0
    else:
        return a[0] + sum(a[1:])

n=int(input("Enter the number of elements:"))
l=[]
for i in range(0,n):
    c=int(input("Enter the elments of the array:"))
    l.append(c)
b=sum(l)
print(b)
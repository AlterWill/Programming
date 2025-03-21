l=[]
n=int(input("Enter the no of elements of first list:"))
for i in range(0,n):
    a=int(input("Enter the elements:"))
    l.append(a)
p=[]
n=int(input("Enter the no of elements of second list:"))
for i in range(0,n):
    a=int(input("Enter the elements:"))
    p.append(a)
k=[]
k.extend(l)
k.extend(p)
c=[]
for i in k:
    if i%2==0:
        c.append(i)
for j in k:
    if j%2!=0:
        c.append(j)
print(c)

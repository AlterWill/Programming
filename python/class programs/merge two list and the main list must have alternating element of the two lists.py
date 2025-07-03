l1=[]
n=int(input("Enter the number of element:"))
for i in range(0,n):
    a=int(input("Enter the elements:"))
    l1.append(a)
l2=[]
n=int(input("Enter the number of element:"))
for i in range(0,n):
    b=int(input("Enter the elements:"))
    l2.append(b)
l=[]
m=len(l1)
p=len(l2)
if m>p:
    for i in range(p):
        l.append(l1[i])
        l.append(l2[i])
    l.extend(l1[p:])
elif p>m:
    for i in range(m):
        l.append(l1[i])
        l.append(l2[i])
    l.extend(l2[m:])
else:
    for i in range(m):
        l.append(l1[i])
        l.append(l2[i])
print(l1,l2,l,sep='\n')

l2=[]
l1=[]
n=int(input("Enter the number of elements of the list:"))
for i in range(0,n):
    a=input(f"Enter the element{i+1}:")
    l1.append(a)
m=int(input("Enter the number of elements of the list:"))
for j in range(0,n):
    b=input(f"Enter the element{i+1}:")
    l2.append(a)
l=[]
d=len(l1)
s=len(l2)
t=d+s
y=e=0
while t<y+e:
    if l1[e]<l2[y]:
        l.append(l1[e])
        e+=1
    elif l1[e]>l2[y]:
        l.append(l2[y])
        y+=1
    else:
        l.append(l1[e])
        l.append(l2[y])
        e+=1
        y+=1





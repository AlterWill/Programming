l=[]
n=int(input("Enter the no of elements:"))
for i in range(0,n):
    a=int(input("Enter the element:"))
    l.append(a)
c=len(l)
l1=[]
l2=[]
for i in range(0,c):
    if i%2==0:
        l2.append(l[i])
    else:
        l1.append(l[i])
print(l,'\n',l1,'\n',l2)

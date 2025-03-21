l=[]
n=int(input("Enter the no of elements:"))
for i in range(0,n):
    a=int(input("Enter the elements:"))
    l.append(a)
p=[]
o=[]
ch=1
for i in l:
    if ch==1:
        p.append(i)
        ch=0
    elif ch==0:
        o.append(i)
        ch=1
print(l,"\n",o,"\n",p)
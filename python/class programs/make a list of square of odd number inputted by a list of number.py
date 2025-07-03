l=[]
n=int(input("Enter the number of element:"))
for i in range(0,n):
    a=int(input("Enter the elements:"))
    l.append(a)
l1=[]
for i in l:
    if i%2!=0:
        l1.append(i**2)
print(l,l1,sep='\n')
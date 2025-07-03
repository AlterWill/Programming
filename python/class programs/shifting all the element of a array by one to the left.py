l=[]
n=int(input("Enter the no of elements:"))
for i in range(n):
    a=int(input("Enter the elements:"))
    l.append(a)
print(l)
l=l[1:]+[l[0]]
print(l)
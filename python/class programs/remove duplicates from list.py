l1=[]
l2=[]
n=int(input("Enter the number of elements:"))
for i in range(n):
    a=int(input("Enter the element:"))
    l1.append(a)

n=int(input("Enter the number of elements:"))
for i in range(n):
    a=int(input("Enter the element:"))
    l2.append(a)

s=set(l1).union(set(l2))
print(s)
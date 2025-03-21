l=[]
n=int(input("Enter the no of elements:"))
for i in range(0,n):
    a=int(input("Enter the elements:"))
    l.append(a)
c=len(l)//2
print(l)
l.reverse()
print(l)
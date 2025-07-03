l=[]
l1=[]
n=int(input("Enter the number of elements of the list:"))
for i in range(0,n):
    a=input(f"Enter the element{i+1}")
    l.append(a)
for i in l:
    if i not in l1:
        l1.append(i)
print(l1)

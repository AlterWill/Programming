sum=no=i=0
n='Y'
while (n=='Y'):
    a=int(input("Enter the number:"))
    sum+=a
    i+=1
    no+=1
    if a<0:
        n='N'
avg=sum/no
print("The average of the number\'s is",avg)
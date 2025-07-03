n=int(input("Enter the number:"))
flag=0
for i in range(n,0,-1):
    b=(i//2)+1
    flag=0
    for j in range(2,b):
        if i%j==0:
            flag=1
            break
    if flag==0:
        print("The prime number less than",n,"is",i)
        break

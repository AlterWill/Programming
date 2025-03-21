a=int(input("Enter the number:"))
flag=0
for i in range(2,a+1):
    b=i//2+1
    for j in range(2,b):
        if i%j==0:
            flag=1
    if flag==0:
        print("This number is a prime number:",i)
    flag=0
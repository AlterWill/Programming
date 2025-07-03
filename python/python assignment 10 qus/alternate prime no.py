n=int(input("Enter the number:"))
flag=0
ch=1
for i in range(2,n+1):
    for j in range(2,i):
        if i%j==0:
            flag=1
    if flag==0:
        if ch==1:
            print(i)
            ch=0
        else:
            ch=1
    flag=0
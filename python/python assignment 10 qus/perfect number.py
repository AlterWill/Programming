a=int(input("Enter the number:"))
sum=0
if a<0:
    print("The number is a negative number")
elif a==0:
    print("The number is zero")
else:
    c=(a//2)+1
    for i in range(1,c):
        if a%i==0:
            sum+=i
    if sum==a:
        print("It is a perfect number:")
    else:
        print("It is not a perfect number:")
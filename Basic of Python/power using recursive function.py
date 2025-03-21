def power(a,n):
    if n==0:
        return 1
    else:
        return a*power(a,n-1)
    



a=int(input("Enter the base:"))
n=int(input("Enter the power:"))
b=power(a,n)
print("The power of ",a,"raised to the power ",n,"is",b)
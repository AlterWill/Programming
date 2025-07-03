def reverse(a):
    b=len(a)
    if b==1:
        return a
    else:
        return a[-1] + reverse(a[:-1])
    
n=input("Enter the string:")
c=reverse(n)
print(c)
'''twisted prime-prime number that is a prime 
number even if it is reversed'''

n=int(input("Enter the prime number:"))
y=n//2
for i in range(2,y):
    flag=0
    if n%i==0:
        flag=1
if flag==0:
    a=str(n)
    b=a[::-1]
    c=int(b)
    q=c//2
    for i in range(2,q):
        flaga=0
        if c%i==0:
            flaga=1
    if flaga==0:
        print("twisted prime")   

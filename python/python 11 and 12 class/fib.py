def fib(n):
    if n<=1:
        return n
    else:
        return(fib(n-1)+fib(n-2))

r=int(input('enter the limit:'))
for i in range(r):
     print(fib(i))
    

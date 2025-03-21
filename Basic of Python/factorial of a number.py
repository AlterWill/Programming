#factorial of a number

n=int(input('enter the number:'))
s=1
for i in range(1,n+1):
    s*=i
print('factorial of a number,',s)
n=int(input('enter the number:'))
sum=1
for i in range(0,n+1):
    for k in range(n-i):
        print(' ',end='')
    for j in range(0,i):
        print(sum,end=' ')
        sum+=1
    print()
    
n=int(input('enter the number:'))
for i in range(0,n+1):
    for k in range(n-i):
        print(' ',end='')
    for j in range(0,i):
        print('*',end=' ')
    print()

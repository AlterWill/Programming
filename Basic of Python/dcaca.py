def sum_n(n):
    t=0
    for i in range(1,n+1):
      t +=i
    return t



n=int(input('enter the upper range to calculate sum:'))
t=sum_n(n)
print('the sum of n is',t)

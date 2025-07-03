c=0
a=int(input('enter the number:'))
for i in range(2,a//2+1):
    if a%i==0:
        c=1
if c==1:
    print('not prime number ')
else:
    print('prime number')
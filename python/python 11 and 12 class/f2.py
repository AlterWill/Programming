a=int(input('enter a number:'))
temp=a
sum=0
for i in range(0,3):
    digit=a%10
    sum=sum+digit**3
    a=a//10
if sum==temp:
    print('it is armstrong number')
else:
    print('it is not an armstrong number')

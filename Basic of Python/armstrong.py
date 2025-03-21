#armstrong
def armstrong():
    a=int(input('Enter the armstrong number:'))
    sum=0
    digit=a
    for i in range(0,3):
       temp=digit%10
       digit=digit//10
       sum+=temp**3
    if a==sum:
       print('It is a armstrong number')
    else:
       print('it is not an armstrong number')


print('to check if it an armstrong number')
armstrong()

def coe(tup):
    counteven=countodd=0
    for i in tup:
       if i%2==0:
           counteven+=1
       else:
           countodd+=1
    return counteven,countodd

t=()
num=int(input('enter the number of elements:'))
for i in range(num):
    ele=int(input('enter the element:'))
    t=t+(ele,)
evenodd=coe(t)
print('the element that are even:',evenodd[0])
print('the element that are odd:',evenodd[1])

term=10
n1=0
n2=1
count=0
nth=0
if term<=0:
    print('put postive number in number of terms')
elif term==1:
    print(n1)
else:
  count=2
  print(0,1)
  while count<=term:
       nth=n1+n2
       n1=n2
       n2=nth
       count+=1
       print(nth)

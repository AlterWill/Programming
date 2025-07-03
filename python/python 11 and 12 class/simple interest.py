def si(p,r,t):
    simple_interest=p*r*t/100
    return simple_interest

pinc=int(input('enter the number:'))
rate=int(input('enter the rate of interest:'))
time=int(input('enter the time:'))
r=si(pinc,rate,time)
print('Simple interest=',r)

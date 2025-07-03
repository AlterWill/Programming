gh=0
bh=0
nb=0
ng=0
n=int(input('enter the number of people in the class'))
for i in range(0,n):
    g=input('enter the gender:(G/M)')
    if g=='G' or g=='g':
        ng+=1
        b=int(input('enter the height:'))
        gh+=b
    elif g=='M' or g=='m':
        nb+=1
        c=int(input('enter the height:'))
        bh+=c  
averageg=gh/ng
averageb=bh/nb
print('the average height of girls:',averageg)
print('the average height of boys:',averageb)

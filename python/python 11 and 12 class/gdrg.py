a=input('enter a string:')
b=list(a)
c=len(b)
d=list('aeiouAEIOU')
e=f=g=''
for i in range(c):
    if a[i] in d:
        e+=b[i]
    else:
        f+=b[i]

print(e)
print(f)
    

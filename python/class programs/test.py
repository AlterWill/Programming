import string
s=input("Enter the string:")
cu=cl=cd=cv=c=0
for i in s:
    if i in string.ascii_lowercase:
        cl+=1
    if i in string.ascii_uppercase:
        cu+=1
    if i in string.digits:
        cd+=1
    if i in " ":
        c+=1
    if i in "AEIOU" or i in "aeiou":
        cv+=1
print(cu,"\n",cl,"\n",cd,"\n",cv,"\n",c)



    
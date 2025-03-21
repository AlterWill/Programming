s=input("enter the string:")
l=len(s)
flag=1
for i in range(0,l):
    if s[i]==s[l-i]:
        flag=1
    else:
        flag=0
if flag==1:
    print("Palidrome")
else:
    print("Not Palindrome")
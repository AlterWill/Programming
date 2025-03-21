def char(str,ch):
    count=0
    for i in str:
        if i==ch:
            count+=1
    return count

str1=input("enter a string:")
ch1=input('enter the character to check:')
result=char(str1,ch1)
if result==0:
    print('the character does not exist in the string')
else:
    print('the character',ch1,'is in the string for',result,'times')

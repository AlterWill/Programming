def convertbinoct(num,base=2):
         str1=''
         while num!=0:
             str1=str1+str(num%base)
             num=num//base
         str1=str1[::-1]
         print(str1)

n=int(input('enter the number:'))
convertbinoct(n)
convertbinoct(n,8)

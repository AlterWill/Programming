list1=list2=[]
for i in range(0,10):
    list1=[]
    list1.append(i*10)
    list2+=list1

print(list2,list1,sep='\n')

'''
create a dictionary named 'stock'.Add 
the following elements to stack and perform 
the following operations.
pencil-400,pen-1000,eraser-200,ink-50

1)print stock
2)delete ink and print stock.
3)Display keys and key-value pairs
4)find the number of items
'''


stock={}
n=int(input("Enter the number of element:"))
for i in range(0,n):
    a=input("Enter the item:")
    b=int(input("Enter the price:"))
    stock[a]=b
for i,j in stock:
    print(i,j)
a=input("Enter the one which you want to delete:")
for k,h in stock:
    if k==a:
        d.remove(a)
for i,j in stock:
    print(i,j)
sum=0
for p,o in stock:
    sum+=o
print(sum)
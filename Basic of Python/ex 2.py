a=2
def fun():  
    global a
    a=a+5
    print(a)

print(a)
fun()
print(a)

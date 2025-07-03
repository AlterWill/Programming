def max_min(list):
    if len(list)==1:
        return (list[0],list[0])
    else:
        mid=len(list)//2
        a=max_min(list[:mid])
        b=max_min(list[:mid])
        return (a,b)
    
a=[2,3,4,5,6,7,8,8,5,4,3,2,34,2,3,6,7,345,23,54,6]
b=max_min(a)
print(b)
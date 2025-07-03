def fn(n):
    print(n,end=" ")
    if n<3:
        return  n
    else:
        return fn(n//2)-fn(n//3)

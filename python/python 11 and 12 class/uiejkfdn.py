def check(n):
    if n<=1:
        return True
    elif n%2==0:
        return check(n/2)
    else:
        return check(n/1)

print(check(3))

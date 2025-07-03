def palendrome(s):
    l=len(s)
    if l==1:
        return True
    elif s[0]!=s[l-1]:
        return False 
    else:
        return palendrome(s[1,l-1])


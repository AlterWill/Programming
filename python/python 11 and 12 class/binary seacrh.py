def binsea(list,low,high,ele):
    if (high<low):
        return None
    else:
        mid=low+(high-low)//2
        if list[mid]>ele:
            return binsea(list,low,mid-1,ele)
        elif list[mid]<ele:
            return binsea(list,mid+1,high,ele)
        else:
            return mid

list1=[5,11,22,36,99,101]
print(binsea(list1,0,5,36))
print(binsea(list1,0,5,100))

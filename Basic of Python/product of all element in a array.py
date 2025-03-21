def product_array(a):
    if a==0:
        return 1
    else:
        b=int(input("Enter the number:"))
        return b*product_array(a-1)

a=int(input("Enter the number of elements:"))
b=product_array(a)
print(b)

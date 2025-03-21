n=int(input("Enter the total number of values to check:"))
b=int(input("Enter the first number:"))
large=small=b
for i in range(1,n):
    a=int(input("Enter the number:"))
    if a>large:
        large=a
    if a<small:
        small=a
print("The largest and the smallest of the list of number are",large,small)

    
#Write pseudocode to determine the largest 
# of three numbers.

a=b=c=large=0
a=int(input("Enter the number:"))
c=int(input("Enter the number of elements:"))
for i in range(0,c):
    b=int(input("Enter the number:"))
    if b>large:
        large=b
print(large)

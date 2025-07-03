a=int(input("Enter the first side:"))
b=int(input("Enter the second side:"))
c=int(input("Enter the third side:"))
if a+b>c and b+c>a and c+a>b:   
    if a==b==c:
        print("equilateral triangle")
    elif a!=b and b!=c and a!=c:
        print("scalene triangle")
    else:
        print("isoscelus triangle")
else:
    print("It is a invalid triangle")

def sumdigits(a):
    if a==0:
        return 0
    else:
        return a%10+sumdigits(a//10)

n=int(input("Enter the number:"))
sum=sumdigits(n)
print("The sum of digits of the number",n,"is",sum)
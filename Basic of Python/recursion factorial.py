#Write a Python function to find the factorial of a 
#number using recursion. (10 marks)

def factorial(a):
    if a==0 or a==1:
        return 1
    else:
        return a*factorial(a-1)
    
n=int(input("Enter the number:"))
b=factorial(n)
print(b)
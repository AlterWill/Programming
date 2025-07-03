def sum_digit(a):
        if a<10:
            return a
        else:
            return (a%10) + sum_digit(a//10)
    
n=int(input("Enter the number:"))
c=sum_digit(n)
print(c)

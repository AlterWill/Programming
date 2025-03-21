a=int(input("Enter the coefficients of a:"))
b=int(input("Enter the coefficients of b:"))
c=int(input("Enter the coefficients of c:"))
solve1=b+((((b**2)-(4*a*c))**0.5)/2*a)
solve2=b-((((b**2)-(4*a*c))**0.5)/2*a)
if type(solve1)==int or type(solve1)==float:
    if type(solve2)==int or type(solve2)==float:
        print("The solution of the quadratic equation is are,",solve1,"and",solve2)
    else:
        print("The one of the solution is a complex number")
        print("The solution is,",solve1)
else:
    print("There are no real roots")
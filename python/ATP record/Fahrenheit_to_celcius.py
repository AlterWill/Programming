t=int(input("Enter the temperture:"))
cf=input("Is the input in celsius or farenheit?(c/f):")
if cf=='c' or cf=='C':
    print("The given temperture in farenheit is :",(((9*t)/5)+32))
else:
    print("The given temperture in celsuis is :",((5/9)*(t-32)))
def check_mobile_number(a):
    a_str=str(a)
    if len(a_str)==10:
        if a_str[0] in '789':
            print("It is a valid moblie number")
        else:
            print("It is not a valid moblie number")
    else:
        print("It is not a valid moblie number")

a=int(input("Enter your moblie number:"))
check_mobile_number(a)
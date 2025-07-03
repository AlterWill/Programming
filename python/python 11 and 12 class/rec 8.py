def display():
    f=open("motivate.txt")
    file=f.read()
    print('the file contents are:\n')
    print(file)
    input('press any key to continue...')
    f.close()

def count_lines():
    f=open('motivate.txt')
    lineslist=f.readlines()
    print('the number of words in this file are:',len(lineslist))
    input('press any key to continue..')
    f.close()

def count_A():
    count=0
    f=open('motivate.txt')
    lineslist=f.readlines()
    for line in lineslist:
        if line[0]=='A':
            count+=1
    print("the number of lines starting with 'a' in this file are:",count)
    input('press any key to continue...')
    f.close()

ch='Y'
while (ch=='Y' or ch=='y'):
    print('--menu--')
    print('1:display the file')
    print('2:count the nuber of lines present in the file')
    print("3:count the lines starting with 'a'")
    print("4:exit")
    print()

    opt=int(input('enter the choice:='))
    print()
    if opt==1:
        display()
    elif opt==2:
        count_lines()
    elif opt==3:
        count_A()
    elif opt==4:
        break
    else:
        print('invalid choice')
    ch=input('do you want to continue?(y/n)')    

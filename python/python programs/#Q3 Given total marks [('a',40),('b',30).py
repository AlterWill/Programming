#Q3 Given total marks [('a',40),('b',30),('c',25)] find winner and percentage of each one if total = 40

lst = [('a',40),('b',30),('c',25)]
winner = 0
winner_name = "" #assigned winner name as empty string

for name,mark in lst: #here name,mark is used because there are two element inside bracket
    if mark > winner:
        winner = mark    #assigned value of mark to winner
        winner_name = name # assigned name crresponding to the mark

print("Winner is:",winner_name)

for name,mark in lst:
    percent = (mark/40)*100
    print("Percentage of",name,"is:",percent,"%")
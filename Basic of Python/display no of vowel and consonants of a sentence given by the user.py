sentence=input("Enter the sentence:")
cv=cc=0
for i in sentence:
    if i in 'aeiouAEIOU':
        cv+=1
    elif i.isalpha():
        cc+=1
print("The number of vowels is",cv)
print("The number of consonants is",cc)
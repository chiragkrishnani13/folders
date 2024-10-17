# WAP to count tne number of vowels in a string
word = input("enter a word ")
vowels = 0

for i in word:
    if i in "aeiou":
        vowels += 1
print(vowels)

# wap to remove all vowels from string
word = input("enter a word ")
x = ""
for i in word:
    if i not in {"A","E","I","O","u","a","e","i","o","u"}:
        x = x + i
print(x)

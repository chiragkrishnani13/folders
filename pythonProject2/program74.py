# WAP find no of duplicates in a list
data = input("enter a numbers ").split()
uni =set(data)
print(len(data)-len(uni))

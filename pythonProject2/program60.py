#wap to acpect atudent name . print length of each name. find the longest namme
names = input("Enter the names ").split(" ")
largest = names[0]
for name in names:
    if len(name) > len(largest):
        largest = name
        print(name,len(name))
print(f"largest name is {largest} ")



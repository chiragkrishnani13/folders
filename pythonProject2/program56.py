# WAP to acpect  LIST OF INTEGERS , FIND THE NUMBER OF INTEGERS AND FIND THE Largest integer
num = [int(x) for x in input("Enter the numbers ").split()]
largest = num[0]
for i in num:
    if i > largest:
        largest = i
print(num)
print(largest)
print(len(num))

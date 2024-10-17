# WAP TO PRINT SUM OF FIRST N ODD NUMBERS
n = int(input("Enter number "))
i = 1
sum = 0
while i <= n:
    sum = sum + (2 * i - 1)
    i = i + 1
print(sum)

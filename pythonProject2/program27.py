# WAP to print sum of squares of first numbers

n = int(input("ENTER N "))
i = 1
sum = 0
while i <= n:
    sum = sum + i ** 2
    i = i + 1
print(sum)

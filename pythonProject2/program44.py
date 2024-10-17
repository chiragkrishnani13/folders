n = int(input("enter n "))
num = 1
den = 2
sum = 0

for i in range(1, n + 1):
    sum = sum + (num / den)
    num += 1
    den += 1
print(sum)

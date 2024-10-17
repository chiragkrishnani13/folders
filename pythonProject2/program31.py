k = int(input("enter number where you want to start"))
n = int(input("enter number"))
i = 1
sum = 0
if k % 2 == 0:
    odd = k + 1
else:
    odd = k

while i <= n:
    sum = sum + odd
    i = i + 1
    odd = odd + 2
print(sum)

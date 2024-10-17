non_zero = 0
n = int(input("enter your number"))
sum = 0
for i in range(n):
    num = int(input("enter number "))
    if num != 0:
        non_zero += 1
    sum = sum + num
print(non_zero)
print(sum / n)

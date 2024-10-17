# WAP TO FIND GCD OF 2 NOS
a = int(input("enter a "))
b = int(input("enter b "))
gcd = 1
if a < b:
    min = a
else:
    min = b

for i in range(2, min // 2 + 1):
    if a % i == 0 and b % i == 0:
        gcd = i
if a % b == 0:
    gcd = b
if b % a == 0:
    gcd = a
print("GCD of ", a, 'and', b, "is ", gcd)

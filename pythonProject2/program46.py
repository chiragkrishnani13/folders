# WAP  to find LCM of a & b
a = int(input("enter a "))
b = int(input("enter b "))
if a > b:
    max = a
else:
    max = b
lcm = max
while True:
    if lcm % a == 0 and lcm % b == 0:
        break
    else:
        lcm += 1
print("LCM OF ", a, "and", b, "is", lcm)

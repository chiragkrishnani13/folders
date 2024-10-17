# WAP ACPECT A NUMBER AND CHECK WEATHER IT IS PRIME OR NOT
n = int(input('enter number '))
prime = True
for i in range(2, n // 2 + 1):
    if n % i == 0:
        prime = False
        break

if (prime == True):
    print(n, "is prime")
else:
    print(n, "is not prime")

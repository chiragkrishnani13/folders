# WAP TO GUESS A NO. BETWEEN  1 TO 100 AND PRINT ATTEMPT
import random

attempt = 0
n = random.randint(1, 100)
match = False
while match != True:
    attempt = attempt + 1
    num = int(input("enter number "))
    if n > num:
        print("more")
    elif n < num:
        print("less")
    else:
        match = True

print("attempts=", attempt)

# WAP to print no's n for all multiples of 3 , print fizz "fizz" and for multiples of 5 , print "buzz"
n = int(input("enter number "))
i = 1
while i <= n:
    if i % 3 != 0 and i % 5 != 0:
        print(i)
    elif i % 3 == 0 and i % 5 == 0:
        print("fizz buzz")
    elif i % 3 == 0:
        print("fizz")
    elif i % 5 == 0:
        print("buzz")

    i = i + 1

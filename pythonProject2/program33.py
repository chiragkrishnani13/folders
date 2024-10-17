n = int(input("enter number "))
i = 1
while i <= n:
    if i % 3 != 0 and i % 5 != 0:
        print(i)
    elif i % 3 == 0 and i % 5 == 0:
        print("bar")
    elif i % 3 == 0:
        print("fizz")
    elif i % 5 == 0:
        print("buzz")
    i = i + 1

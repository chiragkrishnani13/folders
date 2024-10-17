# wap to acpect a list of integers and create another lst
a = int(input("enter the a"))
b = int(input("enter the b"))
numbers = [int(i) for i in input("enter numbers").split()]
res = []
for i in range(a, b + 1):
    if i in numbers:
        res.append(i)
print(res)


# wap to acpect a list of integers and create another lst
a = int(input("enter the a"))
b = int(input("enter the b"))
numbers = [int(i) for i in input("enter numbers").split()]
res = []
for i in numbers:
    if a<=i<=b:
        res.append(i)
print(res)

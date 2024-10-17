lst = [int(i) for i in input("Enter a numbers ").split()]
print(lst)
product = 1
for i in lst:
    product = product * i
print(product)

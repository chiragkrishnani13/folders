a = input("Enter a list ").split()
num = int(input("enter a k "))
num = num - 1
temp = a[num]
a[num] = a[-num - 1]
a[-num - 1] = temp

print(a)

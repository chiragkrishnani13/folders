num = input("enter number ")
d = len(num)
sum = 0
for i in num:
    sum = sum + int(i) ** d
if sum == int(num):
    print("armstrong number")
else:
    print("not an armstrong number")

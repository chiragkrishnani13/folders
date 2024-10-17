# wap to accpet a list numbers, find sum & avg of nums
num = [int(x) for x in input("Enter the numbers ").split()]
sum = 0
for i in num:
    sum = sum + i

print(sum)
print(sum / len(num))


#shortcut method
num = [int(x) for x in input("Enter the numbers ").split()]
total=sum(num)
print(total/len(num))

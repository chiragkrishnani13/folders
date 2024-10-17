# WAP TO FIND OF THE FOLLOWING SERIES UPTO N TERMS
# 1-2+3-4+5-6+7-8+9....
n = int(input("give number "))
sum = 0
sign = 1
for i in range(1, n + 1):
    sum = sum + i * sign
    sign = sign * -1

print(sum)

num = input("enter a number:").split()
sum = 0
for n in num:
    for i in n:
        sum = sum + int(i)

print(sum)

#
# num=input("enter a number").replace(" ","")
# sum=0
# for i in num:
#     sum=sum+int(i)
# print(sum)

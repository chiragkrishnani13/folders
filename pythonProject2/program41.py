x = int(input("enter number "))
y = int(input("enter  number "))
sum=0
for i in range (x,y+1):
    if(i%5!=0):
        sum=sum+i
print(sum)

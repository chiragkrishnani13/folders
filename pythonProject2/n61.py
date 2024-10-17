#wap to find out pure elements from a collections of integers ,i.e integers prsent only once
nums=input("enter a number").split()
s=set(nums)
for i in nums:
    if nums.count(i)<=1:
        print(i,end=" ")

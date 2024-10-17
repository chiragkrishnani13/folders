#wap to acpect  a list of tuples of int and sort them on the basis of second int of tuple also sort the,m based on sum of int of tuples
def based_on_sum(x):
    return sum(x)
def based_on_secondvalue(x):
    return x[1]
lst1=input("Enter nums").split(",")
nums=[]

for data in lst1:
    integers=tuple(int(x) for x in data.split())
    nums.append(integers)
nums.sort(key=based_on_sum)
print(nums)
nums.sort(key= based_on_secondvalue)
print(nums)

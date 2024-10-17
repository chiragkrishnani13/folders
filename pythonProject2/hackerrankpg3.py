n=input().split()
data=dict()
for i in n:

    if i in data:
        data[i]=data[i]+1
    else:
        data[i]=1
print(data)
max_value=0
for x,y in data.items():
    if y>max_value:
        max_value=y
print(max_value)

ele = input().split()
size = int(input("enter size "))
output = []
start=0
end=size
while start<len(ele):
    output.append(ele[start:end])
    start+=size
    end+=size
print(output)

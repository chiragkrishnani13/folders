# wap to print all  unique elements and all duplicate elements from list
lst = input().split()
s = set()
s2 = set()
for j in lst:
    s.add(j)
print(s)

for i in lst:
    if lst.count(i) > 1:
        s2.add(i)
print(s2)

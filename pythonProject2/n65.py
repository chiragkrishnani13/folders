string=input().split()
dic=dict()
for i in string:
    if i in dic:
        dic[i]=dic[i]+1
    else:
        dic[i]=1
print(dic)

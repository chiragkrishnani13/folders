n=int(input())
dic=dict()

for i in range(n):
    name=input("enter name ")
    clotes=input("enter clours of clothes").split()
    s=set(clotes)
    length=len(s)
    dic[i]=length
max=0
max_key=""
for x,y in dic.items():
    if max<y:
        max=y
        max_key=x

print(max_key)

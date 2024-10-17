#wap
num = [int(i) for i in input("enter numbers").split()]
even_lst=[]
odd_lst=[]
for i in num:
    if i%2==0:
        even_lst.append(i)
    if i%2!=0:
        odd_lst.append(i)

if len(even_lst)%2==0:
    print("even")
if len(odd_lst)%2!=0:
    print("odd")
if len(even_lst)%2!=0 and len(odd_lst)%2==0:
    print("none")


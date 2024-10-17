letter=input("enter a leters:")
dic={

}
for i in dic:
    if i in dic:
        dic[i]=dic[i]+1
    else:
        dic[1]=1
print(dic)
max_letter=""
max_count=0

for keys,values in dic.items():
    if values > max_count:
        max_count=values
        max_letter=letter
print(max_letter,max_count)


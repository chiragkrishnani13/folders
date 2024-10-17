# WAP all the data that is prsent more than once in a list
data=input("Enter a data ").split()
s=set(data)
for i in s:
    if data.count(i)>1:
        print(i)


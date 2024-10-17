files=input().split()
def based_on_exent(x):
     lst1=x.split(".")
     return lst1[-1]
files.sort(key=based_on_exent)
print(files)

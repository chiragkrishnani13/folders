#wap sort the list on the basis on count of a
def based_on_a(x):
    return x.count("a")
lst=["chirag","aa","aaaa"]
lst.sort(key=based_on_a,reverse=True)
print(lst)

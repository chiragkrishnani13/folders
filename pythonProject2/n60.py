s1=set(input("enter a numbers of set").split())
s2=set(input("enter a numbers of set").split())
if s1==s2:
    print("no")
elif s1.issuperset(s2):
    print("s1 is superset of s2 ")
elif s2.issuperset(s1):
    print("s2 is superset of s1")

# wap acpect two lsit  and print common elements
ele1 = input("enter elements:").split()
ele2 = input("enter elements:").split()
common = set()
for i in ele1:
    if i in ele2:
        print(i)
        common.add(i)
print(common) 

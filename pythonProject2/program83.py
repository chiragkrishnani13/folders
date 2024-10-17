sen=input("enter a word ").lower()
sen=sen.replace(" ","")
if sen==sen[::-1]:
    print("yes")
else:
    print("none")

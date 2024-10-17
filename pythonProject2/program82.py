str=input("enter a sentence:").replace("_","$")
if str[0]=="_":
    print("_" + str[1:].replace(" ","$"))
else:
    print(str)

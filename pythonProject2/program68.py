# WAP take a sentence from the user and sort it in acessding order
sen=input("Enter a sentence ").split(" ")
for i in sen:
    sorted_sen=sorted(i)
    res="".join(sorted_sen)
    print(res,end=" ")

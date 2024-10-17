# WAPP CAPTIALLIZE EVERY WORD THAT STARTS WIRH I
sen = input('Enter a sentence ').split()
lst = []

for i in sen:
    if i.startswith("i"):

        lst.append(i.capitalize())

    else:
        lst.append(i)
print(" ".join(lst))


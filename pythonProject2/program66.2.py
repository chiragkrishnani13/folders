def is_subset(first, second):
    for i in first:
        if i not in second:
            return False
    return True


word1 = input("ENTER A FIRST WORD ")
word2 = input("ENTER A SECOND WORD ")
if len(word1) != len(word2):
    print("no")
else:
    if is_subset(word1, word2) and is_subset(word2, word1):
        print("yes")
    else:
        print("no")

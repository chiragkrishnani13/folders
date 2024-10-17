sent=input()
output=[]
for i in sent:
    if i not in output:
        output.append(i)
print("".join(output))

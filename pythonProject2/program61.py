string = input("enter the string ")
sub = input("enter the sub string ")

print(string.count(sub))

new_sub = input("enter the new substring ")
new_string = string.replace(sub, new_sub)
print(new_string)

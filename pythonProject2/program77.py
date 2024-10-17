# WAP check if list contains consecutive duplicates and print them
data = input("Enter a data ").split()
s = set()
for i in range(0, len(data) - 1):
    if data[i] == data[i + 1]:
        s.add(data[i])
print(s)

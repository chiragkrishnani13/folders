# WAP TO PRINT FIBONACCI SERIES
# fibonacci series 0 1 1 2 3 5  8 13 ..........
n = int(input("enter number "))
f = 0
s = 1
t = 0
print(f, s, end=" ")
for i in range(3, n + 1):
    t = f + s
    print(t, end=" ")
    f = s
    s = t

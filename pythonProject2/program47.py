# WAP to count vowels,constants,no& char from a string
alpha = input('enter a string ')
v_c = 0
c_c = 0
n_c = 0
s_c = 0

for i in alpha:
    if i >= "a" and i <= "z":
        if i == "a" and i == "e" and i == "i" and i == "o" and i == "u":
            v_c += 1
        else:
            c_c += 1
    elif i >= "0" and i >= "9":
        n_c += 1
    else:
        s_c += 1
print("consonants", c_c, "vowels", v_c, "numbers", n_c, "special charaters", s_c)

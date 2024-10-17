sen = input()
dic = {

}
for i in sen:
    if i in dic:
        dic[i] = dic[i] + 1
    else:
        dic[i] = 1
max_count_letter = 0
for keys, values in dic.items():

    if values == 1:
        print(keys, end=" ")
        break

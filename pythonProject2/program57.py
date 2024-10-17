# wap to convert dd/mm/yy to mm/dd/yy
date = input("enter date in dd/mm/yy ").split("/")
print(f"{date[1]}/{date[0]}/{date[2]}")

# 2 METHOD
date = input("enter date in dd/mm/yy ").split("/")
temp = date[0]
date[0] = date[1]
date[1] = temp
res = "/".join(date)
print(res)

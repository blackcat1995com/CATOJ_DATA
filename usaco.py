import os

names = os.listdir("./data")

# print(names)

for i in names:
    li = i.split('.')

    # print(li)
    pre_name = li[1]
    if li[0] == 'I':
        ext = ".in"
    else:
        ext = ".out"

    new_name = pre_name + ext

    os.rename("./data/" + i, "./data/" + new_name)
    # print(all_name)
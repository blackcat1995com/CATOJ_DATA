import os

names = os.listdir("./data")

# print(names)

for i in names:
    li = i.split('.')

    # print(li[1],li[2])
    # pre_name = 
    # if li[0][-2] == '1':
    # 	new_name = "10" + '.' + li[1]
    # else:
    new_name = li[1] + '.' + li[2]

    os.rename("./data/" + i, "./data/" + new_name)
    print(new_name)
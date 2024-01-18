import os

names = os.listdir("./data")

# print(names)

for i in names:
    li = i.split('.')

    # print(li)
    # pre_name = 


    new_name = li[0][-1] + '.' + li[1]

    os.rename("./data/" + i, "./data/" + new_name)
    # print(new_name)
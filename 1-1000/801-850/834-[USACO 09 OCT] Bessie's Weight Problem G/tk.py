import os

names = os.listdir("./data")

# print(names)

for i in names:
    li = i.split('.')

    # print(li)
    # pre_name = 
    
    new_name = li[1] + '.' + li[2]

    os.rename("./data/" + i, "./data/" + new_name)
    print(new_name)

import os

names = os.listdir("./data")

# print(names)

for i in names:
    li = i.split('.')

    # print(li)
    # pre_name = 
    if li[0][-2] == '1':
    	if li[1] == "ans":
    		li[1] = "out"
    	new_name = "10" + '.' + li[1]
    else:
    	if li[1] == "ans":
    		li[1] = "out"
    	new_name = li[0][-1] + '.' + li[1]

    os.rename("./data/" + i, "./data/" + new_name)
    # print(new_name)
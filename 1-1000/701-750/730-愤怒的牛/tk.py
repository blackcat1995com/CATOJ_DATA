# !/usr/bin/python3
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 网址：https://noi.hioier.com

import os

names = os.listdir("./data")

# print(names)

for i in names:
    li = i.split('.')

    # print(li)
    # pre_name = 
    if len(li[1]) == 2:
    	new_name = "10" + '.' + li[2]
    else:
    	new_name = li[1][-1] + '.' + li[2]

    os.rename("./data/" + i, "./data/" + new_name)
    # print(new_name)
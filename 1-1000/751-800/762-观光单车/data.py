# !/usr/bin/python3
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for i in range(1, 11):

    io = IO(file_prefix='', data_id=i)

    T = randint(1000, 10000)
    n = None
    if i <= 3:
        n = 10

    elif i <= 6:
        n = 1000
    else:
        n = 100000

    io.input_writeln(n, T)

    li = []
    for i in range(n):
        x = randint(1, T)
        li.append(x)

    io.input_write(li)
    io.output_gen('demo.exe')
# !/usr/bin/python3
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for i in range(1, 11):

    io = IO(file_prefix='', data_id=i)

    m = randint(2, 9)
    io.input_write(m)

    n = None
    if i <= 3:
        n = 10
    else:
        n = randint(100, 1000)

    s = ''
    for j in range(n):
        x = randint(0, m - 1)
        s += str(x)

    io.input_write(s)
    # T = randint(1000, 10000)
    # n = None
    # if i <= 3:
    #     n = 10
    #
    # elif i <= 6:
    #     n = 1000
    # else:
    #     n = 100000
    #
    # io.input_writeln(n, T)
    #
    # li = []
    # for i in range(n):
    #     x = randint(1, T)
    #     li.append(x)
    #
    # io.input_write(li)
    io.output_gen('demo.exe')
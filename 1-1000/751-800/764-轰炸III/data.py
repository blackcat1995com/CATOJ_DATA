# !/usr/bin/python3
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for i in range(1, 11):

    io = IO(file_prefix='', data_id=i)

    n = randint(10, 100)
    m = randint(10, 100)

    x = randint(1, n * m // 5)
    y = randint(1, n * m)

    io.input_writeln(n, m, x, y)

    for i in range(x):
        x1 = randint(1, n // 2)
        y1 = randint(1, m // 2)
        x2 = randint(x1, n)
        y2 = randint(y1, m)


        io.input_writeln(x1, y1, x2, y2)

    for i in range(y):
        a = randint(1, n)
        b = randint(1, m)
        io.input_writeln(a, b)

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
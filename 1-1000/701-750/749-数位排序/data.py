# !/usr/bin/python3
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 网址：https://noi.hioier.com

import random

from cyaron import *

for i in range(1, 11):

    io = IO(file_prefix='', data_id=i)

    if i <= 3:
        n = randint(1, 300)
        m = randint(1, n)
    elif i <= 5:
        n = randint(301, 1000)
        m = randint(301, n)
    else:
        n = randint(1001, int(1e6))
        m = randint(1001, n)

    io.input_writeln(n)
    io.input_writeln(m)

    io.output_gen('demo.exe')
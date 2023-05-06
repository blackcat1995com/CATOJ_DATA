# !/usr/bin/python3
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 网址：https://noi.hioier.com

import random

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix='', data_id=i)

    li = []
    for j in range(11):

        if i <= 3:
            t = randint(1, 10)
        else:
            t = randint(1, int(1e6))
        li.append(t)
        test_data.input_write(t, separator=' ')

    test_data.input_writeln()
    x = sum(li) - choice(li)
    test_data.input_writeln(x)

    test_data.output_gen('Project19.exe')
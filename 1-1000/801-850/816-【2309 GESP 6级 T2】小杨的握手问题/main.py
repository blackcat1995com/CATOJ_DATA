# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：http://blackcat1995.com

from cyaron import *
import random

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    if i <= 3:
        n = randint(1, 100)
    else:
        n = randint(200000, 300000)

    test_data.input_writeln(n)
    li = []
    for i in range(n):
        li.append(i)
    random.shuffle(li)

    for i in li:
        test_data.input_write(i)

    test_data.output_gen("demo.exe")
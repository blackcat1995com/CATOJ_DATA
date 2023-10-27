# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：http://blackcat1995.com

from cyaron import *
import random

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(4, 99)
    test_data.input_writeln(n)

    for i in range(n):
        x = randint(90, 210)
        test_data.input_write(x)

    test_data.output_gen("demo.exe")
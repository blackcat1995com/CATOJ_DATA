# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(1, 1000000)
    test_data.input_writeln(n)

    for i in range(n):
        x = randint(1, 10000)
        test_data.input_write(x)

    test_data.output_gen("demo.exe")
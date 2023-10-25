# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    m = randint(1, 100)
    test_data.input_writeln(m)

    for i in range(m):
        t = randint(1, 10 ** (i % 10 + 1))
        test_data.input_writeln(t)

    test_data.output_gen("demo.exe")
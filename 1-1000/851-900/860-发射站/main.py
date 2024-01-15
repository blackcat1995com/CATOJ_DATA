# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for k in range(1, 11):

    test_data = IO(file_prefix="", data_id=k)

    if k <= 4:
        n = randint(1, 5000)

        test_data.input_writeln(n)

        for i in range(n):
            h = randint(1, 1000)
            v = randint(1, 10000)
            test_data.input_writeln(h, v)
    elif k <= 7:
        n = randint(10000, 100000)

        test_data.input_writeln(n)

        for i in range(n):
            h = randint(1, 100000)
            v = randint(1, 10000)
            test_data.input_writeln(h, v)
    else:
        n = randint(100000, 1000000)

        test_data.input_writeln(n)

        for i in range(n):
            h = randint(1, 10000000)
            v = randint(1, 10000)
            test_data.input_writeln(h, v)

    test_data.output_gen("demo.exe")
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

x = randint(1, 2 * 10 ** 9)

for i in range(3, 11):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(15, 30)
    test_data.input_writeln(n)

    # a = randint(1, 1000000)
    # b = randint(100000000, 123456789)
    # for i in range(n):
    #     li = [a, b]
    #     t = choice(li)
    #
    #     test_data.input_write(t)

    test_data.output_gen("demo.exe")
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：http://blackcat1995.com

from cyaron import *
import random

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(10, 50)
    m = randint(2, n * n // 2)
    test_data.input_writeln(n, m)

    for i in range(m):
        a = randint(1, n // 2 - 1)
        b = randint(n // 2 + 1, n)
        test_data.input_write(a, b)

    test_data.output_gen("demo.exe")
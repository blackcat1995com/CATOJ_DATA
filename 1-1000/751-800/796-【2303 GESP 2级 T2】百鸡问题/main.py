# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    x = randint(1, 10)
    y = randint(1, 10)
    z = randint(1, 10)
    n = randint(500, 1000)
    m = randint(200, 500)
    test_data.input_writeln(x, y, z, n, m)

    test_data.output_gen("demo.exe")
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(1, 1400)
    m = randint(2000, 20000)
    test_data.input_writeln(n, m)

    test_data.output_gen("demo.exe")
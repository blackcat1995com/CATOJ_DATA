# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    h1 = randint(0, 15)
    m1 = randint(0, 59)
    h2 = randint(h1 + 2, 23)
    m2 = randint(0, 59)
    test_data.input_writeln(h1)
    test_data.input_writeln(m1)
    test_data.input_writeln(h2)
    test_data.input_writeln(m2)

    test_data.output_gen("demo.exe")
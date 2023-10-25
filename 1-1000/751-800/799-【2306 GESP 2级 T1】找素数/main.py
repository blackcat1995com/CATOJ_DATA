# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    A = randint(2, 500)
    B = randint(A + 1, 1000)

    test_data.input_writeln(A)
    test_data.input_writeln(B)

    test_data.output_gen("demo.exe")
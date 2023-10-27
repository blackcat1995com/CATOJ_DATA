# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：http://blackcat1995.com

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(1, 500)
    test_data.input_writeln(n)
    for i in range(n):
        t = randint(1, n)
        test_data.input_write(t)
    test_data.input_writeln()
    for i in range(n):
        r = randint(1, 1000)
        test_data.input_write(r)
    # test_data.input_writeln(n)

    test_data.output_gen("demo.exe")
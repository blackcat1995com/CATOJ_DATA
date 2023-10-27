# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：http://blackcat1995.com

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(1, 1000)
    test_data.input_writeln(n)

    for i in range(n):
        length = randint(2, 10)
        if i == 1:
            s = String.random((2, 10), charset="111111")
        elif i <= 3:
            s = String.random((2, 10), charset="12")
        elif i <= 6:
            s = String.random((2, 10), charset="123456789")
        else:
            s = String.random((2, 10), charset="123456789ABCDEF")
        test_data.input_writeln(s)
    test_data.output_gen("demo.exe")
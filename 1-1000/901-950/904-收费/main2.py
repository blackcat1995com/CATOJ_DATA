# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：http://blackcat1995.com
from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    str = String.random_sentence((2, 7), word_separators=",",
                                word_length_range=(6, 13),
                                charset="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^")
    test_data.input_writeln(str)
    test_data.output_gen("demo.exe")
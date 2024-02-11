# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

ops = ['+', '-', '*', '/', '%']

for k in range(1, 11):

    test_data = IO(file_prefix="", data_id=k)

    s = ""
    a = randint(1, 1000)
    b = randint(1, 1000)

    s += str(a)
    if a % 3 == 0:
        s += ' '
    s += choice(ops)
    if b % 5 == 0:
        s += ' '
    s += str(b)
    test_data.input_writeln(s)

    test_data.output_gen("demo.exe")
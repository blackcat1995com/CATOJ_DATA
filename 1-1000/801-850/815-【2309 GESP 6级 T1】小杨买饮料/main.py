# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：http://blackcat1995.com

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    if i <= 4:
        n = randint(1, 20)
        V = randint(1, 100)

        test_data.input_writeln(n, V)

        for j in range(n):
            c = randint(1, 100)
            v = randint(1, 100)
            test_data.input_writeln(c, v)

    elif i <= 7:
        n = randint(100, 200)
        V = randint(500, 2000)

        test_data.input_writeln(n, V)

        for j in range(n):
            c = randint(1, 100)
            v = randint(1, 100)
            test_data.input_writeln(c, v)
    else:
        n = randint(400, 500)
        V = randint(1000, 2000)

        test_data.input_writeln(n, V)

        for j in range(n):
            c = randint(1, int(10 ** 6))
            v = randint(1, int(10 ** 6))
            test_data.input_writeln(c, v)

    test_data.output_gen("demo.exe")
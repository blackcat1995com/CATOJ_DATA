# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

ops = ['+', '-', '*', '/']

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(15, 30)
    # test_data.input_writeln(n)

    if i <= 3:
        n = 5
    else:
        n = randint(10, 40) * 2 + 1

    s = ''
    for j in range(1, n + 1):
        if j % 2 == 1:
            t = randint(1, 200)
            t = str(t)
            if len(t) == 3:
                if j % 3 == 0:
                    t = t[0] + ' ' + t[2]
            s += str(t)
        else:
            t =choice(ops)
            s += t

        t = randint(1, 10)
        if t % 3 == 0:
            s += ' '


    test_data.input_writeln(s)



    test_data.output_gen("demo.exe")
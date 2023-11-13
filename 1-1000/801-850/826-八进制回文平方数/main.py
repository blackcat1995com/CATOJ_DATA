# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(1, 10 ** 9)
    test_data.input_writeln(n)

    # test_data.input_writeln(0, 1, randint(1, 1000))
    #
    # tree = Graph.tree(n, 0.4, 0.35)
    #
    # for edge in tree.iterate_edges():
    #     # print(edge.start, edge.end, edge.weight)
    #     test_data.input_writeln(edge.start, edge.end, randint(1, 1000))

    test_data.output_gen("demo.exe")
# !/usr/bin/python3
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 网址：https://noi.hioier.com

import random

from cyaron import *

for i in range(1, 11):

    io = IO(file_prefix='', data_id=i)

    if i <= 3:
        n = 6
    else:
        n = 100

    io.input_writeln(n, randint(60, 100))

    tree = Graph.tree(n)
    li = [-1 for i in range(110)]

    for edge in tree.iterate_edges():
        li[edge.end] = edge.start

    for j in range(1, n + 1):
        v = randint(1, 100)
        w = randint(1, 100)
        io.input_writeln(v, w, li[j])
        # io.input_writeln(edge.end, edge.start)
    io.output_gen('demo.exe')
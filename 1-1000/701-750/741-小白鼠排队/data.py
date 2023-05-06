# !/usr/bin/python3
# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 网址：https://noi.hioier.com
import random

from cyaron import *
import random
'''
 red 朱红 vermeil; vermilion; ponceau 粉红 pink;soft red; rose bloom 梅红 plum;crimson;fuchsia red 玫瑰红 rose madder;rose 桃红 peach blossom
'''
colors = ['red', 'green', 'blue', 'yellow', 'pink', 'brown', 'orange', 'gray', 'white']
for i in range(1, 11):

    test_data = IO(file_prefix='', data_id=i)

    n = random.randint(2, 99)

    test_data.input_writeln(n)

    for j in range(n):
        w = random.randint(1, int(2e8))
        s = String.random(None, charset=colors)

        test_data.input_writeln(w, s)

    test_data.output_gen('Project19.exe')



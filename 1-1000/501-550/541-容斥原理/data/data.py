# !/usr/bin/python3
# -*- coding: utf-8 -*-
# @Time    : 2022/7/13 22:50
# @Author  : 黑猫
# 公众号   : 黑猫编程
# 网址     : ac.blackcat1995.com

import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

n = random.randint(1000000, 2000000)
m = random.randint(5, 16)

def is_prime(x):
    if x < 2:
        return False

    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False

    return True

priems = []
for i in range(2, n):
    if is_prime(i):
        priems.append(i)

fin = open("5.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")


fin.write(str(n) + ' ' + str(m) + '\n')

for i in range(m):
    t = random.choice(priems)
    fin.write(str(t) + ' ')



# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

a, b, c = [float(i) for i in input().split()]

p = (a + b + c) / 2
s = (p * (p - a) * (p - b) * (p - c)) ** 0.5
print("{:.3f}".format(s))
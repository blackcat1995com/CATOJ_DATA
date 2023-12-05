# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

x1, y1, x2, y2 = [float(i) for i in input().split()]

res = ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5
print("{:.3f}".format(res))
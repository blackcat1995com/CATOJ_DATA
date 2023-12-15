# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

x = float(input())

if 0 <= x < 5:
    res = -x + 2.5
elif 5 <= x < 10:
    res = 2 - 1.5 * (x - 3) ** 2
elif 10 <= x < 20:
    res = x / 2 - 1.5

print("{:.3f}".format(res))

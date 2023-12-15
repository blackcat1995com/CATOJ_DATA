# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

a, b, c = [int(i) for i in input().split()]

delta = b * b - 4 * a * c

if delta < 0:
    print("NOANSWER")
elif delta == 0:
    print("{:.3f}".format(-b / 2 / a))
else:
    x1 = (-b + delta ** 0.5) / (2 * a)
    x2 = (-b - delta ** 0.5) / (2 * a)
    print("{:.3f} {:.3f}".format(max(x1, x2), min(x1, x2)))
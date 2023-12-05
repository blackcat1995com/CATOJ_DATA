# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

a1, a2, n = [int(i) for i in input().split()]

d = a2 - a1
print(a1 + (n - 1) * d)
# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

a, x, y = [int(i) for i in input().split()]

cnt = x + y
price = a * cnt - x
print(cnt, price)
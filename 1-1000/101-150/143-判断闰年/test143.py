# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

n = int(input())

if n % 4 == 0 and n % 100 or n % 400 == 0:
    print(1)
else:
    print(0)
# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

a, b = [int(i) for i in input().split()]
c = int(input())

print((a // c) * (b // c))
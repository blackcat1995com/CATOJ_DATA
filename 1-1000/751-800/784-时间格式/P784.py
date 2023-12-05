# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

n = int(input())

h = n // 3600
m = (n - h * 3600) // 60
s = n % 60

print("%d:%d:%d" % (h,m,s))


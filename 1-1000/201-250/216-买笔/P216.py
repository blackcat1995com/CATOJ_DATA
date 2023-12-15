# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

x = int(input())

c = x // 4
r = x % 4

if r == 0:
    a = 0
    b = 0
elif r == 1:
    a = 0
    b = 1
    c -= 1
elif r == 2:
    a = 1
    b = 0
    c -= 1
else:
    a = 1
    b = 1
    c -= 2

print(a, b, c)



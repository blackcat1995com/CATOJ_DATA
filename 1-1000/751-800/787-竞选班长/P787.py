# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

a = int(input())
b = int(input())
c = int(input())
d = int(input())

cnt = 0

if a >= 90:
    cnt += 1

if b >= 90:
    cnt += 1

if c >= 90:
    cnt += 1

if cnt >= 2 and d >= 85:
    print("Qualified")
else:
    print("Not qualified")


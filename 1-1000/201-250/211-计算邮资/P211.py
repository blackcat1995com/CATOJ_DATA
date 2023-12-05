# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

w, flag = [i for i in input().split()]

w = int(w)

if w <= 1000:
    res = 8
else:
    res = 8 + (w - 1000) // 500 * 4
    if (w - 1000) % 500:
        res += 4

if flag == "y":
    res += 5

print(res)
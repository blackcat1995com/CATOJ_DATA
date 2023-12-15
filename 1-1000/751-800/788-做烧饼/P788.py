# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

n, k = [int(i) for i in input().split()]

# n 烧饼数量
# k 锅的数量

if n <= k:
    print(2)
else:
    t = n * 2 // k
    if n * 2 % k:
        t += 1

    print(t)
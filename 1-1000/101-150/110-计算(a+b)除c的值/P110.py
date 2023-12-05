# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

import math
a, b, c = [int(i) for i in input().split()]

if a + b < 0:
    print(math.ceil((a + b) / c))
else:
    print((a + b) // c)

# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

a, b, op = [i for i in input().split()]
a = int(a)
b = int(b)

if op == "+":
    res = a + b
elif op == "-":
    res = a - b
elif op == "*":
    res = a * b
elif op == "/":
    if b == 0:
        res = "Divided by zero!"
    else:
        res = a // b
else:
    res = "Invalid operator!"

print(res)


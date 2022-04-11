import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(10, 100)
m = random.randint(10, 100)
x1 = random.randint(3, n//2 - 1)
y1 = random.randint(3, m - 1)
x2 = random.randint(n // 2 + 1, n - 1)
y2 = random.randint(1, m - 1)
fin.write(str(n) + ' ' + str(m) + '\n' + str(x1) + ' ' + str(y1) + '\n' + str(x2) + ' ' + str(y2) + '\n')

import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

m = 100000
n = 10000

fin.write(str(m) + ' ' + str(n) + '\n')

for i in range(m):
	x = random.randint(1, n)
	y = random.randint(1, n)
	c = random.randint(1, 10000)
	fin.write(str(x) + ' ' + str(y) + ' ' + str(c) + '\n')


import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("1.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(1, 500)
m = random.randint(1, 100000)
fin.write(str(n) + ' ' + str(m) + '\n')

for i in range(m):
	a = random.randint(1, n // 2)
	b = random.randint(a + 1, n)
	c = random.randint(1, 10000)
	fin.write(str(a) + ' ' + str(b) + ' ' + str(c) + '\n')


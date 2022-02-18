import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

a = random.randint(-1000000000, 200000000)
t = random.randint(1, 1000000)
b = a + t
n = random.randint(100, 100000)
fin.write(str(a) + ' ' + str(b) + '\n')
fin.write(str(n) + '\n')

for i in range(n):
	x = random.randint(-1000000000, 100000000)
	t = random.randint(1, 1000000)
	y = x + t
	fin.write(str(x) + ' ' + str(y) + '\n')


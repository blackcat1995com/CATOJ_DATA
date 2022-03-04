import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("4.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(10000, 100000)
m = random.randint(10000, 100000)
x = random.randint(5000, 20000)
fin.write(str(n) + ' ' + str(m) + ' ' + str(x) + '\n')

t = random.randint(1, 100)
for i in range(n):
	add = random.randint(1, 2000)
	t += add
	fin.write(str(t) + ' ')

fin.write('\n')

t = random.randint(1, 100)
for i in range(m):
	add = random.randint(1, 2000)
	t += add
	fin.write(str(t) + ' ')
import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("5.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(1, 500)
m = random.randint(1, 500)

fin.write(str(n) + '\n')

for i in range(n):
	t = random.randint(-10000, 10000)
	fin.write(str(t) + ' ')

fin.write('\n')

fin.write(str(m) + '\n')

for i in range(m):
	t = random.randint(-10000, 10000)
	fin.write(str(t) + ' ')

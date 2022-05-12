import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("14.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(1, 1000)
m = random.randint(1, 30)

fin.write(str(n) + ' ' + str(m) + '\n')

for i in range(m):
	p = random.randint(2, 100)
	k = random.randint(2, 100)
	fin.write(str(p) + ' ' + str(k) + '\n')

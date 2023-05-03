import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

T = random.randint(1, 1000)

fin.write(str(T) + '\n')

for t in range(T):
	n = random.randint(10, 100)
	k = random.randint(1, 1000)
	fin.write(str(n) + ' ' + str(k) + '\n')

	m = 1

	for i in range(n):
		m += random.randint(1, 9990)
		fin.write(str(m) + ' ')

	fin.write('\n')

	for i in range(n):
		p = random.randint(1, 999)
		fin.write(str(p) + ' ')

	fin.write('\n')



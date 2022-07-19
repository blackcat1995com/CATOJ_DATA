import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(50000, 100000)
m = random.randint(100000, 200000)

fin.write(str(n) + ' ' + str(m) + '\n')

for i in range(m-50000):
	a = random.randint(1, n)
	b = random.randint(1, n)
	fin.write('M ' + str(a) + ' ' + str(b) + '\n')

for i in range(50000):
	a = random.randint(1, n)
	fin.write('Q ' + str(a) + '\n')

import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("8.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(50000, 100000)
d = random.randint(1000, 10000)
k = random.randint(1, n)

fin.write(str(n) + ' ' + str(d) + ' ' + str(k) + '\n')

for i in range(n):
	t1 = random.randint(80000, 100000)
	t2 = random.randint(80000, 100000)
	fin.write(str(t1) + ' ' + str(t2) + '\n')

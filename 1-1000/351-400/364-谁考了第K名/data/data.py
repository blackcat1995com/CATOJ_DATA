import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(10, 100)
k = random.randint(1, n)

fin.write(str(n) + ' ' + str(k) + '\n')

for i in range(n):
	t1 = random.randint(1, 1000000000)
	t2 = random.random() * t1
	fin.write(str(t1) + ' ' + str(t2) + '\n')

import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

T = 50

fin.write(str(T) + '\n')

for i in range(T):
	n = 100000
	fin.write(str(n) + '\n')
	for j in range(n):
		x = random.randint(1, 1000)
		fin.write(str(x) + ' ')
	fin.write('\n')

import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(1000, 100000)
k = random.randint(1000, 100000)

fin.write(str(n) + ' ' + str(k) + '\n')

for i in range(n):
	h = random.randint(1000, 100000)
	w = random.randint(1000, 100000)
	fin.write(str(h) + ' ' + str(w) + '\n')
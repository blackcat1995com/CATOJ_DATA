import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

N = random.randint(1, 100)
V = random.randint(1, 100)
fin.write(str(N) + ' ' + str(V) + '\n')

for i in range(N):
	v = random.randint(1, 100)
	w = random.randint(1, 100)
	s = random.randint(1, 100)
	fin.write(str(v) + ' ' + str(w) + ' ' + str(s) + '\n')


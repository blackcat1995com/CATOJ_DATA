import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("1.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = 10000
q = 100

fin.write(str(n) + ' ' + str(q) + '\n')

for i in range(q):
	t = random.randint(500, 1000)
	fin.write(str(t) + '\n')

import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("5.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = 100
m = 20

fin.write(str(n) + ' ' + str(m) + '\n')

for i in range(n):
	for j in range(m):
		t = random.randint(0, 10)
		fin.write(str(t) + ' ')
	fin.write('\n')


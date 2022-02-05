import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(10, 100)
m = random.randint(10, 100)

fin.write(str(n) + ' ' + str(m) + '\n')

s = 0
for i in range(n):
	for j in range(m):
		t = random.randint(1, 100)
		fin.write(str(t) + ' ')
		if i == 0 or i == n - 1 or j == 0 or j == m - 1:
			s += t
	fin.write('\n')

fout.write(str(s))



import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(1, 100)
m = random.randint(1, 100)

fin.write(str(n) + ' ' + str(m) + '\n')

for i in range(n):
	for j in range(m):
		t = random.randint(1, 100)
		if t % 3 == 0:
			fin.write('1 ')
		else:
			fin.write('0 ')
	fin.write('\n')



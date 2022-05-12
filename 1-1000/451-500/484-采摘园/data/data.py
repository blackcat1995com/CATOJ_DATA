import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(3, 50)
m = random.randint(3, 50)

fin.write(str(n) + ' ' + str(m) + '\n')


for i in range(n):
	for j in range(m):
		t = random.randint(1, 10)
		if t >= 3:
			fin.write('1 ')
		else:
			fin.write('2 ')
	fin.write('\n')
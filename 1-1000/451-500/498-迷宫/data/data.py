import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

T = 100

fin.write(str(T) + '\n')

for i in range(T):
	n = random.randint(5, 100)
	fin.write(str(n) + '\n')

	for j in range(n):
		for k in range(n):
			t = random.randint(1, 3)
			if t % 3 != 0:
				fin.write('.')
			else:
				fin.write('#')
		fin.write('\n')

	a = random.randint(0, n - 1)
	b = random.randint(0, n - 1)
	c = random.randint(0, n - 1)
	d = random.randint(0, n - 1)
	fin.write(str(a) + ' ' + str(b) + ' ' + str(c) + ' ' + str(d) + '\n')








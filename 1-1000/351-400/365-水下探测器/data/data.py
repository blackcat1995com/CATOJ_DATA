import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

h = random.randint(0, 100)
s = random.randint(0, h)

fin.write(str(h) + ' ' + str(s) + '\n')

n = random.randint(0, 100)
for i in range(n):
	t = random.randint(0, 100)
	if t % 2 == 1:
		fin.write('u')
	else:
		fin.write('d')

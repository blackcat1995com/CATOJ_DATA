import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = 1000

fin.write(str(n) + '\n')

x = random.randint(-50, 50)

for i in range(n):
	t = random.randint(-50, 50)
	if t % 2 == 0:
		fin.write(str(t) + ' ')
	else:
		fin.write(str(x) + ' ')

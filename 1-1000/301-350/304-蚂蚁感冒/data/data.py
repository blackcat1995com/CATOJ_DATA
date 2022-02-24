import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(30, 49)

fin.write(str(n) + '\n')

for i in range(n):
	t1 = random.randint(1, 10) % 2
	if t1:
		t2 = random.randint(1, 99)
		fin.write(str(t2) + ' ')
	else:
		t2 = random.randint(-99, -1)
		fin.write(str(t2) + ' ')

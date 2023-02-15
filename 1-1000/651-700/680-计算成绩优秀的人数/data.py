import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(10, 100)

res = 0

fin.write(str(n) + '\n')

for i in range(n):
	t = random.randint(50, 100)
	fin.write(str(t) + ' ')
	if t >= 85:
		res += 1

fout.write(str(res))

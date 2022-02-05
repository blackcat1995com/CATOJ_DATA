import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(90, 100)

fin.write(str(n) + '\n')

ans = 0
for i in range(n):
	t = random.randint(1000, 9999)
	fin.write(str(t) + ' ')

	a = t % 10
	b = t // 10 % 10
	c = t // 100 % 10
	d = t // 1000
	if a - b - c - d > 0:
		ans += 1
fout.write(str(ans) + '\n')


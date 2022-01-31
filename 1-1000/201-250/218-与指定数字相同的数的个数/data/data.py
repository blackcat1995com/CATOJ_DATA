import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
# ch_li = ['y', 'n']
fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(10, 100)
m = random.randint(1, n)

fin.write(str(n) + ' ' + str(m) + '\n')

ans = 0
for i in range(n):
	t = random.randint(1, 10)
	fin.write(str(t) + ' ')
	if t == m:
		ans += 1


fout.write(str(ans) + '\n')




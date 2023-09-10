import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("9.in", "w", encoding="utf8")
fout = open("9.out", "w", encoding="utf8")

n = random.randint(10000, 100000)
fin.write(str(n) + '\n')

li = []
for i in range(n):
	t = n = random.randint(-100000, 100000)
	li.append(t)
	fin.write(str(t) + ' ')

li.sort()

for i in li:
	fout.write(str(i) + ' ')



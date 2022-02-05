import random
import math
ch_li = ['o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
int_li = [0, 1]
fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(10, 99)

fin.write(str(n) + '\n')

li = []
for i in range(n):
	t = random.randint(2, 99)
	li.append(t)
	fin.write(str(t) + ' ')

for i in range(len(li) - 1, -1, -1):
	fout.write(str(li[i]) + ' ')



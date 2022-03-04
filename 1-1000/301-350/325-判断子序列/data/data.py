import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("5.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

li1 = []
li2 = []

m = random.randint(10000, 100000)
n = random.randint(1, m//7)
fin.write(str(n) + ' ' + str(m) + '\n')

for i in range(m):
	t = random.randint(-1000000000, 1000000000)
	li2.append(t)

idx = random.randint(10, 100)
for i in range(n):
	add = random.randint(1, 10) % 7 + 1
	idx += add
	fin.write(str(li2[idx]) + ' ')

fin.write('\n')

for i in li2:
	fin.write(str(i) + ' ')


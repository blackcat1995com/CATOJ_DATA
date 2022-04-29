import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("7.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = 10000
m = 10000

fin.write(str(n) + ' ' + str(m) + '\n')

x = 1
for i in range(n):
	x += random.randint(1, 3)
	fin.write(str(x) + ' ')

fin.write('\n')

for i in range(m):
	t = random.randint(1, 8000)
	fin.write(str(t) + '\n')



import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(1, 40)

fin.write(str(n) + '\n')

res = 0

for i in range(n):

	a = random.randint(5, 8)
	b = random.randint(5, 8)
	fin.write(str(a) + ' ' + str(b) + '\n')

	if a > b:
		res += 3
	elif a == b:
		res += 1

fout.write(str(res) + '\n')


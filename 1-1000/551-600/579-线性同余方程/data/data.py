import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(1, 9999)

fin.write(str(n) + '\n')

for i in range(n):
	a = random.randint(1, 2000000000)
	b = random.randint(1, 2000000000)
	fin.write(str(a) + ' ' + str(b) + '\n')



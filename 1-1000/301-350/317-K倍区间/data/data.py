import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("9.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = 100000
k = 2
fin.write(str(n) + ' ' + str(k) + '\n')

for i in range(n):
	t = random.randint(1, 10000)
	fin.write(str(t) + '\n')

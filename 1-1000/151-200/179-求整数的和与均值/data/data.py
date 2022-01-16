import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("1.in", "w", encoding="utf8")
fout = open("1.out", "w", encoding="utf8")

n = random.randint(1000, 10000)

fin.write(str(n) + '\n')

s = 0
for i in range(n):
	t = random.randint(-10000, 10000)
	fin.write(str(t) + '\n')
	s += t 

fout.write(str(s) + ' ' + str(round(s / n, 5)) + '\n')


import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("5.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

T = 9

fin.write(str(T) + '\n')

for i in range(T):
	n = random.randint(4, 9)
	m = random.randint(4, 9)
	x = random.randint(0, n-1)
	y = random.randint(0, m-1)
	fin.write("%d %d %d %d\n" % (n,m,x,y))

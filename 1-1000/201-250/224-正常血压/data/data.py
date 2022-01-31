import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']


fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(10, 100)

fin.write(str(n) + '\n')


for i in range(n):
	a = random.randint(80, 150)
	b = random.randint(50, 120)
	fin.write(str(a) + ' ' + str(b) + '\n')


	




import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(1, 100)
m = random.randint(1, 20)
fin.write(str(n) + '\n' + str(m) + '\n')


for i in range(m):
	x = random.randint(1, 10)
	fin.write(str(x) + ' ')
	




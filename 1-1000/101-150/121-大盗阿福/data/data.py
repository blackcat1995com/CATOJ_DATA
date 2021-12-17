import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("10.out", "w", encoding="utf8")
T = random.randint(1, 50)
fin.write(str(T) + '\n')
for i in range(T):
	n = random.randint(1, 100000)
	fin.write(str(n) + '\n')
	for j in range(n):
		cash = random.randint(1, 1000)
		fin.write(str(cash) + ' ')
	fin.write('\n')








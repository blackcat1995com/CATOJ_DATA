import random
import math
ch_li = ['a', 'b', 'c', '#', 'e', '%', '-', 'h', 'i', '+', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'U', 'V', 'W', 'X', 'Y', 'Z']


fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(50, 100)
fin.write(str(n) + '\n')
for i in range(n):
	t = random.randint(1, 20)
	for j in range(t):
		ch = random.choice(ch_li)
		fin.write(ch)
	fin.write('\n')



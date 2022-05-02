import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

m = random.randint(10, 20)

fin.write(str(m) + '\n')

for i in range(m):
	t = random.randint(10, 20)
	fin.write(str(t % 2) + ' ')
fin.write('\n')

n = random.randint(2, 9)
fin.write(str(n) + '\n')


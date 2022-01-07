import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(100, 1000)
fin.write(str(n) + '\n')

for i in range(n):
	li = []
	maxlen = random.randint(500, 1000)
	for j in range(maxlen):
		n = random.randint(-300, 800)
		li.append(n)
		fin.write(str(n) + ' ')
	fin.write('\n')
	fout.write(str(sum(li)) + '\n')

# fin.write(str(a) + '\n')

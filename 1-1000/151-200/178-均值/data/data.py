import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("6.in", "w", encoding="utf8")
fout = open("6.out", "w", encoding="utf8")

n = random.randint(1, 100)

fin.write(str(n) + '\n')

sum = 0
for i in range(n):
	t = random.random() * 1000 - 500
	fin.write(str(t) + '\n')
	sum += t 

fout.write(str(round(sum / n, 4)) + '\n')


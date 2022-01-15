import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("2.in", "w", encoding="utf8")
fout = open("2.out", "w", encoding="utf8")

n = random.randint(1, 100)

fin.write(str(n) + '\n')

sum = 0
for i in range(n):
	t = random.randint(15, 25)
	fin.write(str(t) + '\n')
	sum += t 

fout.write(str(round(sum / n, 2)) + '\n')


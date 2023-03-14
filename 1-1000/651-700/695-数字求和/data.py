import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(60, 80)

fin.write(str(n) + ' ')

res = 0
for i in range(5):
	t = random.randint(1, 100)
	fin.write(str(t) + ' ')
	if t < n:
		res += t 

fout.write(str(res)) 


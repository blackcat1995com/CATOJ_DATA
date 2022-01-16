import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

m = random.randint(1, 500)
n = random.randint(510, 1000)
fin.write(str(m) + ' ' + str(n) + '\n')
s = 0
for i in range(m, n + 1):
	if i % 17 == 0:
		s += i

fout.write(str(s) + '\n')





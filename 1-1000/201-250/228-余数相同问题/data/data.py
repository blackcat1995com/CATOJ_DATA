import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("6.in", "w", encoding="utf8")
fout = open("6.out", "w", encoding="utf8")

a = random.randint(10, 1000) * 13
b = random.randint(10, 1000) * 11
c = random.randint(10, 1000) * 143
fin.write(str(a) + ' ' + str(b) + ' ' + str(c))
li = [a, b, c]
i = 2
while i <= max(li):
	if a % i == b % i and a % i == c % i:
		fout.write(str(i) + '\n')
		break
	i += 1




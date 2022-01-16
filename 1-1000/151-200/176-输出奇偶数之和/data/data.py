import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(1, 100)

fin.write(str(n) + '\n')

s1 = 0
s2 = 0
for i in range(1, n + 1):
	if i % 2 == 0:
		s1 += i
	else:
		s2 += i 

fout.write(str(s1) + ' ' + str(s2) + '\n')





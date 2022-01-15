import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
fin = open("10.in", "w", encoding="utf8")

n = random.randint(1, 110)
m = random.randint(1, 110)

fin.write(str(n) + '\n')
fin.write(str(m) + '\n')

for i in range(n):
	for j in range(m):
		t = random.randint(1, 20)
		if t % 5 == 0:
			fin.write('W ')
		else:
			fin.write('. ')
	fin.write('\n')

# fin = open("1.in", "w", encoding="utf8")
# # fout = open("1.out", "w", encoding="utf8")

# a = random.randint(1, 1000)

# fin.write(str(a) + '\n')

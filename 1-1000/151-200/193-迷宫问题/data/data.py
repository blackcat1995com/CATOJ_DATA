import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(100, 1000)

fin.write(str(n) + '\n')

for i in range(n - 1):
	for j in range(n):
		t = random.randint(10, 20)
		if i == j:
			fin.write("0" + ' ')
		else:
			if t % 3 == 0:
				fin.write("1" + ' ')
			else:
				fin.write("0" + ' ')
	fin.write("\n")

for i in range(n):
	fin.write("0" + ' ')
import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

score = random.randint(0, 100)
n = random.randint(30, 1000)

fin.write(str(score) + '\n' + str(n) + str('\n'))

for i in range(n):
	t = random.randint(0, 100)
	fin.write(str(t) + ' ')

import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(10, 30)

fin.write(str(n) + '\n')

li = []
t = random.randint(-100000, 100000)
for i in range(n):
	x = random.randint(1, 10000)
	t += x;
	li.append(t)

# random.shuffle(li)

for i in li:
	fin.write(str(i) + ' ')


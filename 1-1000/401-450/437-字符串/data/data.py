import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(3, 99)
li = []

for i in range(n):
	ch = random.choice(ch_li)
	fin.write(ch)
	li.append(ch)

for i in range(len(li) - 1, -1, -1):
	fout.write(li[i])

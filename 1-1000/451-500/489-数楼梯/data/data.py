import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(2000, 5000)


li = [0, 1, 2]

fin.write(str(n) + '\n')

for i in range(3, n + 1):
	li.append(li[i - 1] + li[i - 2])

fout.write(str(li[n]) + '\n')

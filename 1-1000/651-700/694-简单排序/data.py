import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

# n = random.randint(4)

# fin.write(str(n) + '\n')

a = random.randint(1, 4321)
b = random.randint(1, 4321)
c = random.randint(1, 4321)

fin.write("%d %d %d" % (a, b, c))

if a > b:
	a, b = b, a

if a > c:
	a, c = c, a

if b > c:
	b, c = c, b

fout.write("%d %d %d" % (a, b, c))
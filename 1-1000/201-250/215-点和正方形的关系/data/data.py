import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
# ch_li = ['y', 'n']
fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

x = random.randint(-1, 2)
y = random.randint(-1, 2)

fin.write(str(x) + ' ' + str(y) + '\n')

if x >= -1 and x <= 1 and y >= -1 and y <= 1:
	fout.write("yes")
else:
	fout.write("no")




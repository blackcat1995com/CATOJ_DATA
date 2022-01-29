import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
ch_li = ['y', 'n']
fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

a = random.randint(1, 10)
b = random.randint(1, 10)
c = random.randint(1, 10)

fin.write(str(a) + ' ' + str(b) + ' ' + str(c) + '\n')

if a + b > c and a + c > b and b + c > a:
	fout.write("yes")
else:
	fout.write("no")




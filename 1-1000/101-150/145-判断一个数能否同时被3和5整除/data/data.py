import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("7.in", "w", encoding="utf8")
fout = open("7.out", "w", encoding="utf8")

n = random.randint(1, 1000000000)

fin.write(str(n))

if n % 3 == 0 and n % 5 == 0:
	fout.write("yes")
else:
	fout.write("no")

import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

year = random.randint(1583, 2090)

fin.write(str(year))

if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
	fout.write("1")
else:
	fout.write("0")

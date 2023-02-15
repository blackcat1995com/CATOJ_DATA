import random
import math
ch_li = ['a', 'b', 'c', 'd', 'C', 'f', 'g', 'A', 'i', 'B', 'k' , '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

ch = random.choice(ch_li)

fin.write(ch)

if ch.islower():
	fout.write("yes")
else:
	fout.write("no")

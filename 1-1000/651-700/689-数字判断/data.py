import random
import math
ch_li = ['1', '2', '3', '4', '5', '6', '7', '8', 'i', 'B', 'k' , '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

ch = random.choice(ch_li)

fin.write(ch)

if ch.isdigit():
	fout.write("yes")
else:
	fout.write("no")

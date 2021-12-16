import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

a = random.randint(100, 200)
b = random.randint(100, 200)


# fin.write(random.choice(ch_li) + '\n')
fin.write(str(a) + ' ' + str(b))

a -= b * 0.8
if a < 0: 
	a = 0.00

fout.write(str(round(a, 2)))
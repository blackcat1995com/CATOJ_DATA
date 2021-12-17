import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

a = random.randint(500, 1000)
b = random.randint(1, 1000)

fin.write(str(a) + ' ' + str(b))

c = a // b
d = a % b

# ans = int((a + b) / c)

fout.write(str(c) + ' ' + str(d))

# fout.write(str(round(c, 3)))
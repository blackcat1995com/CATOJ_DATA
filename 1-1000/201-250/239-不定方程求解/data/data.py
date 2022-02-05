import random
import math
ch_li = ['o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
int_li = [0, 1]
fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

a = random.randint(1, 4)
b = random.randint(1, 100) * 2
c = random.randint(100, 160) * 6

fin.write(str(a) + ' ' + str(b) + ' ' + str(c))


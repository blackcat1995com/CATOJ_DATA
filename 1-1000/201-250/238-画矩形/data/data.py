import random
import math
ch_li = ['o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
int_li = [0, 1]
fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

m = random.randint(5, 10)
n = random.randint(5, 10)
ch = random.choice(ch_li)
c = random.choice(int_li)

fin.write(str(m) + ' ' + str(n) + ' ' + ch + ' ' + str(c))


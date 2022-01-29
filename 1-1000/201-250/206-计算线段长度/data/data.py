import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("10.out", "w", encoding="utf8")

a = random.randint(1, 10000)
b = random.randint(1, 10000)
c = random.randint(1, 10000)
d = random.randint(1, 10000)

fin.write(str(a) + ' ' + str(b) + '\n')
fin.write(str(c) + ' ' + str(d) + '\n')
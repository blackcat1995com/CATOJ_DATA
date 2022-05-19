import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

a = random.randint(100000000000000000000, 200000000000000000000)
b = random.randint(1000, 10000)
fin.write(str(a) + '\n' + str(b) + '\n')
fout.write(str(a * b))

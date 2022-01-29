import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
ch_li = ['y', 'n']
fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

a = random.randint(1, 3000)
ch = random.choice(ch_li)
fin.write(str(a) + ' ' + ch + '\n')


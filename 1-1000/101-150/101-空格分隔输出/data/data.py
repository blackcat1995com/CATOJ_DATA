import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("10.out", "w", encoding="utf8")

a = random.random()
b = random.randint(1, 1000)

c = a * b
fin.write(random.choice(ch_li) + '\n')
fin.write(str(b) + '\n')
fin.write(str(a * 999) + '\n')
fin.write(str(c) + '\n')

# fout.write(str(round(c, 3)))
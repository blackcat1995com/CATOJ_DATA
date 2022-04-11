import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("2.in", "w", encoding="utf8")
fout = open("2.out", "w", encoding="utf8")

n = 7
t = 2 ** n + 1
fin.write(str(n) + '\n')
fout.write(str(t) + '\n')

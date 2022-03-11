import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

A = random.randint(0, 9)
fin.write(str(A))
A = random.randint(0, 9)
fin.write(str(A) + '/')

B = random.randint(0, 9)
fin.write(str(B))
B = random.randint(0, 9)
fin.write(str(B) + '/')

C = random.randint(0, 9)
fin.write(str(C))
C = random.randint(0, 9)
fin.write(str(C))

import random
import math

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

a = random.random()
b = random.randint(1, 1000)

c = a * b
fin.write(str(c))
fout.write(str(round(c, 3)))
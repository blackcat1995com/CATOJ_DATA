import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

# n = random.randint(4)

# fin.write(str(n) + '\n')

a = random.randint(1000, 10000)
b = random.randint(1, a - 5)
# c = random.randint(1, 87654321)
# d = random.randint(1, 87654321)
res = a * a - b * b
fin.write("%d %d" % (a, b))
fout.write(str(res))
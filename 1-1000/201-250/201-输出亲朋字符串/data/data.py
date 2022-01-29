import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
# ch_li1 = ['a', 'b', 'c', 'd', 'E', 'F', 'G']
# ch_li2 = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p']
# ch_li3 = ['q', 'r', 's', 't', 'u', 'v', 'w']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(10, 100)

for i in range(n):

	t = random.randint(0, 9)

	fin.write(str(t))


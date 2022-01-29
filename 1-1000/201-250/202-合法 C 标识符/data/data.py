import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
# ch_li1 = ['a', 'b', 'c', 'd', 'E', 'F', 'G']
# ch_li2 = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p']
ch_li3 = ['a', 'b', 'c', 'd', 'e', 'f','q', 'r', 's', 't', 'u', 'v', 'w', '_', '1', '2', '3', '4', '#', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(1, 20)

for i in range(n):

	s = random.choice(ch_li3)

	fin.write(s)


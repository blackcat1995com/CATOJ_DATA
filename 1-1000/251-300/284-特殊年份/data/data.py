import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("3.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

for i in range(5):

	a = random.randint(1000, 9999)

	fin.write(str(a) + '\n')

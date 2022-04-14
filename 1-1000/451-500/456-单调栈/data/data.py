import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("8.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = 99998


fin.write(str(n) + '\n')

li = list(range(1, n + 1))



for i in range(len(li)-1, -1, -1):
	
	fin.write(str(li[i]) + ' ')
import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
ch_li = [' ',' ',' ',' ',' ',' ',' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p']

fin = open("10.in", "w", encoding="utf8")
# fout = open("9.out", "w", encoding="utf8")

s1 = ""
n = random.randint(100, 200)

for i in range(n):
	ch = random.choice(ch_li)
	s1 += ch

fin.write(s1 + '\n')

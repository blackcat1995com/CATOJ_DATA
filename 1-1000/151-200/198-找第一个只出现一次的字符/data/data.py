import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
ch_li1 = ['a', 'b', 'c', 'd', 'E', 'F', 'G']
ch_li2 = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p']
ch_li3 = ['q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

s1 = ""
n = random.randint(100, 10000)

for i in range(n):
	ch = random.choice(ch_li2)
	s1 = s1+ch 
fin.write(s1)
s2 = ""
for i in range(20):
	ch = random.choice(ch_li3)
	s2 = s2+ch 
fin.write(s2)


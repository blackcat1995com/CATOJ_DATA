import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
ch_li1 = [' ',' ',' ',' ', 'a', 'b', 'c', 'd']
ch_li2 = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p']
ch_li3 = ['q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

s1 = ""
n = random.randint(100, 1000)

for i in range(n):
	ch = random.choice(ch_li1)
	s1 = s1+ch 

fin.write(s1 + '\n')

s2 = ""
for i in s1:
	if i == ' ':
		s2 += "%20"
	else:
		s2 += i 
fout.write(s2 + '\n')
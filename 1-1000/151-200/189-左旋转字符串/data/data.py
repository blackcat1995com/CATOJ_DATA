import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

s = ""
n = random.randint(10, 100)

for i in range(n):
	ch = random.choice(ch_li)
	s += ch 

fin.write(s + '\n')
t = random.randint(1, 100)

fin.write(str(t))

s2 = ""
t %= len(s)
s2 += s[t:]
s2 += s[0:t]


fout.write(s2 + '\n')
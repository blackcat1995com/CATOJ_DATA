import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
ch_li = [' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '1','2','3','4','5','6','7','8','9','0']

fin = open("6.in", "w", encoding="utf8")
fout = open("6.out", "w", encoding="utf8")

s = ""
n = random.randint(100, 210)

for i in range(n):
	ch = random.choice(ch_li)
	s += ch

fin.write(s + '\n')

cnt = 0

for i in s:
	if i >= '0' and i <= '9':
		cnt += 1

fout.write(str(cnt) + '\n')
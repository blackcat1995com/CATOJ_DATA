import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

li = ['A', 'B', 'C', 'D', 'E']
# n = random.randint(1, 9999)

s = "DCBAD"
ans = 0
for i in range(5):
	ch = random.choice(li)
	fin.write(ch)
	if ch == s[i]:
		ans += 30

fout.write(str(ans))
import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = random.randint(1, 9999)
# n = 12

fin.write(str(n) + '\n')

res = 0

def calc(n):

	res = 0

	for i in str(n):
		if i == "1":
			res += 1

	return res

for i in range(1, n + 1):
	res += calc(i)

fout.write(str(res))
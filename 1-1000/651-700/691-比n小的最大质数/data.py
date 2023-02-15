import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("2.in", "w", encoding="utf8")
fout = open("2.out", "w", encoding="utf8")

n = random.randint(105, 1000) * 7
# n = 100
fin.write(str(n) + '\n')

def is_prime(n):

	for i in range(2, n):
		if n % i == 0:
			return False

	return True

for i in range(n - 1, 1, -1):
	if is_prime(i):
		fout.write(str(i))
		break

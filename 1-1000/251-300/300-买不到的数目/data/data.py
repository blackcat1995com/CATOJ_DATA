import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

primes = []

for i in range(2, 1001):
	if i == 2:
		primes.append(i)
	else:
		flag = True
		for j in range(2, i):
			if i % j == 0:
				flag = False
				break
		if flag:
			primes.append(i)

# print(primes)

a = random.choice(primes)
b = random.choice(primes)
# a = random.randint(1, 1000)

fin.write(str(a) + ' ' + str(b))

c = a * b - a - b 

fout.write(str(c))


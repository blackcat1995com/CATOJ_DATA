import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(1000, 3000)
fin.write('123')



for i in range(n):
	t = random.randint(1, 2)
	if t % 2:
		num1 = random.randint(-100000, 100000)
		fin.write(','+str(num1))
	else:
		num2 = random.randint(-1000, 1000) * random.random()*1000
		fin.write(','+str(num2))
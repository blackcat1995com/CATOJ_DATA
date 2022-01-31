import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
# ch_li = ['y', 'n']
fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

k = random.randint(10, 99)


fin.write(str(k) + '\n')


sum1 = sum5 = sum10 = 0
for i in range(k):
	t = random.randint(1, 10)
	fin.write(str(t) + ' ')
	if t == 1:
		sum1 += 1
	if t == 5:
		sum5 += 1
	if t == 10:
		sum10 += 1


fout.write(str(sum1) + '\n' + str(sum5) + '\n' + str(sum10) + '\n')




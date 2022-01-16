import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

n = 17

fin.write(str(n) + '\n')

li1 = []
li2 = []
li3 = []
for i in range(n):
	t1 = random.randint(0, 10)
	li1.append(t1)
	t2 = random.randint(0, 10)
	li2.append(t2)
	t3 = random.randint(0, 10)
	li3.append(t3)
	fin.write(str(t1) + ' ' + str(t2) + ' ' + str(t3) + '\n')
	
fout.write(str(sum(li1)) + ' ' + str(sum(li2)) + ' ' + str(sum(li3)) + ' ' + str(sum(li1)+sum(li2)+sum(li3)))


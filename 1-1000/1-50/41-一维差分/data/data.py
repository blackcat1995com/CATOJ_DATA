import random

fin = open('10.in', mode='w', encoding='utf-8')
# fout = open('9.out', mode='w', encoding='utf-8')

n = random.randint(55555, 66666)
m = random.randint(55555, 66666)

fin.write(str(n) + ' ' + str(m) + '\n')

for i in range(n):
	t = random.randint(-1000, 1000)
	fin.write(str(t) + ' ')
fin.write('\n')

for i in range(m):
	t1 = 1
	t2 = n
	c = random.randint(-1000, 1000)
	fin.write(str(min(t1,t2)) + ' ' + str(max(t1,t2)) + ' ' + str(c) + '\n')


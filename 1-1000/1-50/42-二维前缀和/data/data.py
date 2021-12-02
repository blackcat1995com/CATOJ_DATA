import random

fin = open('8.in', mode='w', encoding='utf-8')
# fout = open('2.out', mode='w', encoding='utf-8')
# 1 000000 0000
n = random.randint(900, 1000)
m = random.randint(900, 1000)
q = random.randint(100000, 101000)

fin.write(str(n) + ' ' + str(m) + ' ' + str(q) + '\n')

for i in range(n):
	for j in range(m):
		t = random.randint(-1000, 1000)
		fin.write(str(t) + ' ')
	fin.write('\n')
# fin.write('\n')
# n = 1 m = 10
for i in range(q):
	x1 = random.randint(1, 10)
	y1 = random.randint(1, 10)
	x2 = random.randint(900, n)
	y2 = random.randint(900, m)

	fin.write(str(min(x1,x2)) + ' ' + str(min(y1,y2)) + ' ' + str(max(x1,x2)) + ' ' + str(max(y1,y2)) + '\n')


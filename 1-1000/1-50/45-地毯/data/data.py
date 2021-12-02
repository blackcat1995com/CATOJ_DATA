import random

fin = open('5.in', mode='w', encoding='utf-8')
# fout = open('2.out', mode='w', encoding='utf-8')
# 1 000000 0000
n = random.randint(888, 999)
m = random.randint(888, 999)


fin.write(str(n) + ' ' + str(m) + '\n')

# for i in range(n):
# 	for j in range(n):
# 		t = random.randint(-1000, 1000)
# 		fin.write(str(t) + ' ')
# 	fin.write('\n')
# fin.write('\n')
# n = 1 m = 10
for i in range(m):
	x1 = random.randint(1, n)
	y1 = random.randint(1, n)
	x2 = random.randint(1, n)
	y2 = random.randint(1, n)

	fin.write(str(min(x1,x2)) + ' ' + str(min(y1,y2)) + ' ' + str(max(x1,x2)) + ' ' + str(max(y1,y2)) + '\n')


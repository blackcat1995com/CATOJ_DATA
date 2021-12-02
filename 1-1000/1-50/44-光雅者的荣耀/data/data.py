import random

fin = open('10.in', mode='w', encoding='utf-8')
# fout = open('9.out', mode='w', encoding='utf-8')

n = random.randint(55555, 66666)
k = random.randint(1, 5)

fin.write(str(n) + ' ' + str(k) + '\n')

for i in range(n - 1):
	t = random.randint(88888888888, 99999999999)
	fin.write(str(t) + ' ')
fin.write('\n')

# for i in range(m):
# 	t1 = 2
# 	t2 = n-2

# 	fin.write(str(min(t1,t2)) + ' ' + str(max(t1,t2)) + '\n')


import random

fin = open('10.in', mode='w', encoding='utf-8')
# fout = open('2.out', mode='w', encoding='utf-8')

n = random.randint(88888, 100000)
fin.write(str(n) + '\n')

li = ['I', 'I', 'I', 'Q', 'Q']
for i in range(n):
	op = random.choice(li)
	x = random.randint(-1000000000, 1000000000)
	fin.write(op + ' ' + str(x) + '\n')


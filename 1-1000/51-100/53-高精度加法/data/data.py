import random

fin = open('10.in', mode='w', encoding='utf-8')
# fout = open('5.out', mode='w', encoding='utf-8')

for i in range(20):
	a = random.randint(0, 9)
	fin.write(str(a))
fin.write('\n')

for i in range(20):
	a = random.randint(0, 9)
	fin.write(str(a))


import random

fin = open('10.in', mode='w', encoding='utf-8')
# fout = open('5.out', mode='w', encoding='utf-8')

for i in range(100):
	a = random.randint(1, 9)
	fin.write(str(a))
fin.write('\n')

for i in range(30):
	a = random.randint(1, 9)
	fin.write(str(a))


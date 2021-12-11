import random
fin = open("1.in", "w", encoding="utf8")

fin.write(str(50) + '\n')

for i in range(50):
	n = random.randint(9000, 10000)
	fin.write(str(n) + '\n')
	for j in range(n):
		t = random.randint(1, 1000)
		fin.write(str(t) + ' ')
	fin.write('\n')



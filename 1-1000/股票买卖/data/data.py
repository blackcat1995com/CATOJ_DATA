import random
fin = open("1.in", "w", encoding="utf8")

fin.write(str(50) + '\n')

for i in range(50):
	n = random.randint(90000, 100000)
	fin.write(str(n) + '\n')
	for j in range(n):
		t = random.randint(-1000000, 1000000)
		fin.write(str(t) + ' ')
	fin.write('\n')



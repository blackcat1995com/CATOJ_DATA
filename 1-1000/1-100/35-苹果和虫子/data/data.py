import random

fin = open('10.in', mode='w', encoding='utf-8')
fout = open('10.out', mode='w', encoding='utf-8')

m = random.randint(0, 100)
t = random.randint(0, 100)
s = random.randint(0, 10000)
fin.write(str(m) + ' ' + str(t) + ' ' + str(s))
if t == 0:
	m = 0
else:
	m -= s // t
	if s % t:
		m -= 1
	if m < 0:
		m = 0



fout.write(str(m))
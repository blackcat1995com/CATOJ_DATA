import random

fin = open('10.in', mode='w', encoding='utf-8')
fout = open('10.out', mode='w', encoding='utf-8')

a = random.randint(0, 100000000)
b = random.randint(0, 100000000)

c = a + b

fin.write(str(a) + ' ' + str(b))
fout.write(str(c))
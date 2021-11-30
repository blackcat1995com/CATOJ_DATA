import random

fin = open('10.in', mode='w', encoding='utf-8')
fout = open('10.out', mode='w', encoding='utf-8')

a = random.randint(1, 1000)
b = random.randint(1, 1000)
s = a * b
fin.write(str(a) + ' ' + str(b))
fout.write(str(s))
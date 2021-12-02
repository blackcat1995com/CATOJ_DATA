import random

fin = open('10.in', mode='w', encoding='utf-8')
fout = open('10.out', mode='w', encoding='utf-8')

a = random.randint(-99999999, 99999999)
b = random.randint(-99999999, 99999999)

fin.write(str(a) + ' ' + str(b))
fout.write(str(b) + ' ' + str(a))
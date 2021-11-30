import random

fin = open('10.in', mode='w', encoding='utf-8')
fout = open('10.out', mode='w', encoding='utf-8')

a = random.randint(0, 10000)
b = random.randint(0, 9)

c = (a*10 + b) // 19

fin.write(str(a) + ' ' + str(b))
fout.write(str(c))
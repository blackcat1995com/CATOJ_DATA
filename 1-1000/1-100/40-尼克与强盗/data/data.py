import random

fin = open('2.in', mode='w', encoding='utf-8')
fout = open('2.out', mode='w', encoding='utf-8')

a = random.randint(10, 99)

gw = a % 10
sw = a // 10 
fin.write(str(a))
fout.write(str(gw) + str(sw))
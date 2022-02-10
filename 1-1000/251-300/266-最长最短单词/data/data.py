import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', ' ', ' ', ' ', ',', ',', ',']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(20, 2000)

for i in range(n):

	ch = random.choice(ch_li)
	fin.write(ch)
	
fin.write('\n')

# for i in range(n):

# 	ch = random.choice(ch_li)
# 	fin.write(ch)


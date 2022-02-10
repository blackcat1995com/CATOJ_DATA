import random
import math
ch_li = ['A','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', ' ', ' ', ' ', ' ', 'z', '|', 'Z', '$', 'B', 'G', 'Z', 'z']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(1, 80)

for i in range(n):

	ch = random.choice(ch_li)
	fin.write(ch)
	
fin.write('\n')

# for i in range(n):

# 	ch = random.choice(ch_li)
# 	fin.write(ch)


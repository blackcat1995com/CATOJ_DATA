import random
import math
ch_li = ['a', 'b', 'c', 'd', 'e', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'o', 'p', 'q', 'r', 's', 't', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(10, 99)

# fin.write(str(n) + '\n')

for i in range(n):
	ch = random.choice(ch_li)
	fin.write(ch)


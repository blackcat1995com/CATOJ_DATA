import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("8.in", "w", encoding="utf8")
fout = open("8.out", "w", encoding="utf8")

n = 20000
k = 4

fin.write(str(n) + ' ' + str(k) + '\n')

if n % (k + 1):
	fout.write('1')
else:
	fout.write('2')

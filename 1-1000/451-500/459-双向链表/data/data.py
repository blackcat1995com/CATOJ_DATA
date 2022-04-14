import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("xxx.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = random.randint(5000, 100000)
# fin.write(str(n) + '\n')
li = ['L', 'R', 'IL', 'IR', 'D']
li2 = ['L', 'R']
for i in range(50):
	op = random.choice(li2)
	# if op == 'L' or op == 'R':
	x = random.randint(1, 100000000)
	fin.write(op + ' ' + str(x) + '\n')
	# if op == 'IL' or op == 'IR':
	# 	k = random.randint(1, i + 1)
	# 	x = x = random.randint(1, 100000000)
	# 	fin.write(op + ' ' + str(k) + ' ' + str(x) + '\n')

# for i in range(n - 3000):
# 	op = random.choice(li)
# 	if op == 'L' or op == 'R':
# 		x = random.randint(1, 100000000)
# 		fin.write(op + ' ' + str(x) + '\n')
# 	if op == 'IL' or op == 'IR':
# 		k = random.randint(1, i + 1)
# 		x = x = random.randint(1, 100000000)
# 		fin.write(op + ' ' + str(k) + ' ' + str(x) + '\n')
# 	else:
# 		k = random.randint(1, i + 1)
# 		fin.write(op + ' ' + str(k) + '\n')
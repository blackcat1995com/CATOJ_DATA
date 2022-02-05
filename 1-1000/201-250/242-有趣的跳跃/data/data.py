import random
import math
ch_li = ['o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
int_li = [0, 1]
fin = open("10.in", "w", encoding="utf8")
# fout = open("10.out", "w", encoding="utf8")

n = random.randint(20, 3000)

fin.write(str(n) + ' ')

li = []
for i in range(10, n + 10):
	# t = random.randint(1, 10)
	# fin.write(str(n) + ' ')
	li.append(i)

# print(li)
random.shuffle(li)

for i in li:
	fin.write(str(i) + ' ')


# print(li)
# print(n)

# li1 = []
# li2 = []

# ans = 0
# for i in range(n):
# 	t1 = random.randint(-1000, 1000)
# 	t2 = random.randint(-1000, 1000)
# 	li1.append(t1)
# 	li2.append(t2)
# 	ans += t1 * t2

# for i in li1:
# 	fin.write(str(i) + ' ')
# fin.write('\n')

# for i in li2:
# 	fin.write(str(i) + ' ')

# fout.write(str(ans))



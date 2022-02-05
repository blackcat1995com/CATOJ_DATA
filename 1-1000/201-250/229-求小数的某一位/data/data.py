import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
li = [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97]


fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")
a = random.choice(li)
b = random.choice(li)
n = random.randint(1, 10000)

fin.write(str(a) + ' ' + str(b) + ' ' + str(n))


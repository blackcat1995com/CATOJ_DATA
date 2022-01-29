import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']
ch_li = ['+', '-', '*', '/', '#', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("10.out", "w", encoding="utf8")

a = random.randint(-100, 100)
b = random.randint(0, 5)
op = random.choice(ch_li)

fin.write(str(a) + ' ' + str(b) + ' ' + str(op) + '\n')

import random

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

x = random.randint(1, 1000)
fin.write(str(x) + '\n')

ans = x * 10
fout.write(str(x) + ' ' + str(ans) + '\n')
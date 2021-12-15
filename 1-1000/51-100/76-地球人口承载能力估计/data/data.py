import random

fin = open("10.in", "w", encoding="utf8")
fout = open("10.out", "w", encoding="utf8")

x = random.randint(500, 1000)
y = random.randint(x - 100, x)
a = random.randint(100, 200)
b = random.randint(200, 300)
fin.write(str(x) + str(' ') + str(a) + str(' ') + str(y) + str(' ') + str(b) + str('\n'))

if a * x < b * y:
	ans = (y*b - x*a) / (b-a)
	print("%.2f\n" % ans)
fout.write(str(round(ans, 2)) + '\n')
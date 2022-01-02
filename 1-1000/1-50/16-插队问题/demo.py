n = int(input())

li = [int(i) for i in input().split()]

x = int(input())

num = li.pop()

li.insert(x - 1, num)

for i in li:
  print(i, end=' ')
n = int(input())

li = [int(i) for i in input().split()]

ave = sum(li) / n

ans = 0

for i in li:
  if i > ave:
    ans += 1
    
print(ans)
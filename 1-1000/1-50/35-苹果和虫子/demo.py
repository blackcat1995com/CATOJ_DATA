m, t, s = [int(i) for i in input().split()]

if t == 0:
  print(0)
else:
  m -= s // t
  
  if s % t:
    m -= 1
  if m < 0:
    m = 0
    
print(m)



import math
n = int(input())
a = list(map(int, input().split()))

start = min(a)
end = max(a)
diff = end - start 

s_cnt = a.count(start)
e_cnt = a.count(end)
if start==end:
    ways = math.comb(n, 2)
else:
    ways = e_cnt*s_cnt
print(diff,ways)
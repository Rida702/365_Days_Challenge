#https://atcoder.jp/contests/dp/tasks/dp_a
min_1 = 0
min_2 = 0
def min_distance(N,a,i):
    if i==N-1:
        return 0
    elif i>= N-2:
        return abs(a[i]-a[i+1])
    dist_1 = abs(a[i]-a[i+1])
    dist_2 = abs(a[i]-a[i+2])
    min_1 = dist_1 + min_distance(N,a,a[i+1])
    min_2 = dist_2 + min_distance(N,a,a[i+2])
    return min(min_1,min_2)

N = int(input())
a = list(map(int, input().split()))
dist = min_distance(N,a,0)
print(dist)
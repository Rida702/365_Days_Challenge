def min_distance(N,a,i):
    

N = int(input())
a = list(map(int, input().split()))
dist = min_distance(N,a,0)
print(dist)
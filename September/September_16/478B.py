#Combinatorics
# https://codeforces.com/problemset/problem/478/B
import math
input_str = input().split()
n = int(input_str[0])
k = int(input_str[1])

if k==1:
    min_p = max_p = math.comb(n,2)
elif n==k:
    min_p = max_p = 0
else:
    max_p = math.comb((n-k)+1,2)
    if n%k==0:
        a = n//k
        min_p = (math.comb(a,2))*k
    else:
        c = 1
        while True:
            a = (n-c)%(k-c)
            if a!=0:
                c += 1
            else:
                b = (n-c)//(k-c)
                break
        min_p = (math.comb(b,2))*k-c
print(min_p,max_p)
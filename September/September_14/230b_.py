import math
def primeSieve(sieve,N):
    sieve[2] = 1
    for i in range(3,N,2):
        sieve[i] = 1
    for i in range(3,N+1):
        if sieve[i]:
            for j in range(i*i,N,i):
                sieve[j] = 0
    return sieve

N = 1000000
sieve = [0] * 1000001
sieve = primeSieve(sieve,N)
n = int(input())
a = list(map(int,input().split()))
for i in range(n):
    value = int(math.sqrt(a[i]))
    if sieve[value]==1 and value**2==a[i]:
        print("YES")
    else:
        print("NO")
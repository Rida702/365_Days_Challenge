def countSetBits(n):
    count=0
    while(n>0):
        last_bit = n&1
        if last_bit==1:
            count+=1
        n = n>>1
    return count
    
n , m , k = map(int, input().split())
arr = []

for _ in range(m+1):
    xi = int(input())
    arr.append(xi)

friends = 0

for i in range(m):
    value = arr[i]^arr[m]
    if countSetBits(value)<=k:
        friends+=1

print(friends)
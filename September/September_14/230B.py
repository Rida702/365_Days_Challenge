import math
def Tprime(n):
    count=0
    for i in range(2,int(math.sqrt(n)+1)):
        if n%i==0:
            count+=1
            if count>1:
                break
    if count>1 or count==0:
        return "NO"
    else:
        return "YES"

n = int(input())
a = list(map(int,input().split()))
for i in range(n):
    ans = Tprime(a[i])
    print(ans)
test = int(input())
#for even number XOR==0 in two steps 
while test>0:
    n = int(input())
    a = list(map(int, input().split()))
    if sum(a)==0:
        print(0)
    ans = 0
    for i in range(n):
        ans ^= a[i]
    if ans==0:
        print(1)
        print(1,n)
    else:
        print(2)
        print(1,n)
        print(1,n)
    aa = 0
    for i in range(4):
        aa ^= ans
    print(ans)
    print(aa)
    test-=1
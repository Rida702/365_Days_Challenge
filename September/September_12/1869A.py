test = int(input()) 
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
        if n%2==0:
            print(2)
            print(1,n)
            print(1,n)
        else:
            print(4)
            print(1,n-1)
            print(1,n-1)
            print(n-1,n)
            print(1,n)
    test-=1
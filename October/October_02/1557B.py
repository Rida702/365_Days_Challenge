test = int(input())
while test>0:
    n,k = map(int,(input().split()))
    a = list(map(int,input().split()))
    count = 0
    for i in range(1,len(a)):
        if a[i]<a[i-1]:
            count+=1
    count+=1
    if count<=k:
        print("YES")
    else:
        print("NO")
    test-=1
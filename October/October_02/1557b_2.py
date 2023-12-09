test = int(input())
while test>0:
    n,k = map(int,(input().split()))
    a = list(map(int,input().split()))
    #s = a[:]
    indexes = []
    #s.sort()
    count = 0
    
    
    for i in range(len(a)):
        indexes.append(i)
        if i>=1:
            if indexes[i] - indexes[i-1] == 1:
                continue
            else:
                count+=1   
    count+=1
    if count<=k:    
        print("YES")
    else:
        print("NO")
    test-=1
test = int(input())
for i in range(test):
    x, y, n = map(int, input().split())
    a = [0] * n
    flag = 0
    a[0] = y
    for i in range(1,n):
        value = a[i-1]-i
        if value<x:
            flag=1
            break
        else:
            a[i] = value
    if a[i-1]-i<x:
        flag=1
    else:
        a[i] = x
    a.reverse()
    if flag==1:
        print(-1)
    else:
        for i in range(n):
            print(a[i], end=" ")
    
        
#https://codeforces.com/problemset/problem/1352/C
test = int(input())
while test>0:
    input_str = input().split()
    n = int(input_str[0])
    k = int(input_str[1])
    prev_div = divs = k//n
    a = 0
    flag = 0
    while True:
        if abs(prev_div-a)>n:
            a = (k+divs)//n
            prev_div = divs
            divs = a
        else:
            break
    b = (k+divs)//n
    if ((k+divs-b))!=k:
        ans = k+divs+1
    else:
        ans = k + divs
    if ans%n==0:
        print(ans+1)
    else:
        print(ans)
    test-=1
import math

def getDivisor(n):
    flag = 0
    for i in range(3,int(math.sqrt(n))+1, 2):
        if n%i==0:
            flag = 1
            return i
    if flag==0:
        return n
    
test = int(input())
while test>0:
    parts = input().split()
    l = int(parts[0])
    r = int(parts[1])
    if r<=3:
        print(-1)
    elif(l<r):
        if r%2!=0:
            r-=1
        print(2,r-2)
    else:
        if l%2==0:
            print(2,l-2)
        else:
            num = getDivisor(l)
            if num==l:
                print(-1)
            else:
                print(num, l-num)
    test-=1
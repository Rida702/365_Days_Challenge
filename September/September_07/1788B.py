test = int(input())

while test>0:
    n = int(input())
    if n==1:
        print(1,0)
    elif(n%2==0):
        print(int(n/2),int(n/2))
    else:
        print(int(n/2),int((n/2)+1))
    test-=1
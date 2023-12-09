def countSetBits(n):
    count=0
    while(n>0):
        last_bit = n&1
        if last_bit==1:
            count+=1
        n = n>>1
    print(count)
    
countSetBits(5)
print(int(bin(5)[2:]))
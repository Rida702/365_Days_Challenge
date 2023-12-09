n, m, k = map(int, input().split())
arr = []
for _ in range(m + 1):
    xi = int(input())
    arr.append(xi) 
 
    
binary_arr = []    
for i in range(0,m+1):
    binary_representation = int(bin(arr[i])[2:])
    binary_arr.append(binary_representation)
    
friends = 0
for i in range(0,m):
    count = 0
    fidor = binary_arr[m]
    player = binary_arr[i]
    while(fidor>0):
        a = player%10
        b = fidor%10
        if a!=b: 
            count+=1
        if count>k:
            break
        player//=10
        fidor//=10
           
    if count<=k & player!=0:
        while(player>0):
            player//=10
            count+=1
            if count>k:
                break
    if count<=k: 
        friends+=1     
print(friends)
#https://codeforces.com/contest/1882/problem/B

test = int(input())

while test>0:
    #Take Input
    n = int(input())
    arrays = []
    for _ in range(n):
        line = input().split()
        num_elements = int(line[0])
        elements = list(map(int, line[1:]))
        arrays.append(elements)
        
    if n==1:
        print(0)
        break
    else:
        #Take Union of all arrays 
        arr = []
        for sublist in arrays:
            arr.extend(sublist)
        c_arr = list(set(arr))

        count = [0]*len(c_arr)
        for i in range(len(c_arr)):
            for arr in arrays:
                if c_arr[i] in arr:
                    count[i]+=1
        min_count = min(count)
        print(len(c_arr)-min_count)
    test-=1
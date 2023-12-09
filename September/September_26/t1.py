test = int(input())
while test>0:
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
        arr = []
        for sublist in arrays:
            arr.extend(sublist)
        c_arr = list(set(arr))

        count_1 = [0]*len(c_arr)
        for i in range(len(c_arr)):
            crr = []
            for arr in arrays:
                if c_arr[i] in arr:
                    continue
                else:
                    crr.extend(arr)
            l = len(set(crr))
            count_1[i] = l
        max_count = max(count_1)
        print(max_count)
    test-=1 
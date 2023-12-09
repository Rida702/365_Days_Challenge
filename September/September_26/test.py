#Another approach could be take Union of all sets and the take each element from that set and take union of 
# those arrays which do not have that element and store it's size in an array

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
        count_1 = [0]*len(c_arr)
        for i in range(len(c_arr)):
            crr = []
            for arr in arrays:
                if c_arr[i] in arr:
                    count[i]+=1
                else:
                    crr.extend(arr)
            l = len(set(crr))
            count_1[i] = l
        min_count = min(count)
        max_count = max(count_1)
        #print(len(c_arr)-min_count)
        print(max_count)
    test-=1 
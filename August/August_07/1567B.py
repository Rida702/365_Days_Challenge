test = int(input())
xor_values = []

xor_values.append(0)

for i in range(1,300000):
    xor_values.append(xor_values[i - 1] ^ i)

while test>0:
    input_str = input()
    input_parts = input_str.split()
    a = int(input_parts[0])
    b = int(input_parts[1])
    
    ans = xor_values[a-1]
    
    if ans==b:
        print(a)
    elif ans^b != a:
        print(a+1)
    else:
        print(a+2)
    test-=1    
    
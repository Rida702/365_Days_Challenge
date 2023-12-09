def nth_number(k,b,c,n):
    if len(b)<=k:
        return b[n-1]
    else:
        sequence = b + [0] * (n - k)
        for i in range(k, n):
            a_i = sum(c[j] * sequence[i - j] for j in range(k))
            sequence.append(a_i)
        result = sequence[-1]
    return result
           
test = int(input())
for _ in range(test):
    k = int(input())
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))
    n = int(input())
a = nth_number(k,b,c,n)
print(a)
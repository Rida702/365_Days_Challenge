def calculatePower(x):
    value = 1
    while value<=x:
        value*=2
    return value/2

values = input()
parts = values.split()

n = int(parts[0])
p = int(parts[1])

value = 0
count = 0
while(value!=n):
    value+=p
    value+=calculatePower(n-value)
    count+=1
print(count)
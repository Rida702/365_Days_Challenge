# https://codeforces.com/problemset/problem/1697/C
n = int(input())
s = input()
t = input()

if s.count('a')!=t.count('a') or s.count('b')!=t.count('b') or s.count('c')!=t.count('c'):
    print("NO")
else:
    if s==t:
        print("YES")
        
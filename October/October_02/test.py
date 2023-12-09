def solve():
    n, k = map(int, input().split())
    a = list(map(int,input().split()))
    store = {}

    for i in range(n):
        store[a[i]] = i

    locations = list(store.values())
    l = 1

    for i in range(1, len(locations)):
        if locations[i] - locations[i - 1] != 1:
            l += 1

    if l <= k:
        print("Yes")
    else:
        print("No")

def main():
    # solve()
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()

a, b = map(int, input().split())

for i in range(1000000):
    re1 = abs(a - i)
    re2 = abs(b - i)
    if re1 == re2:
        print(i)
        exit(0)

print("IMPOSSIBLE")

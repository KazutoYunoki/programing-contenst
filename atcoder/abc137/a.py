a, b = map(int, input().split())

p = a + b
m = a - b
k = a * b

max_n = max(p, m)
max_n = max(max_n, k)

print(max_n)

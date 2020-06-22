from collections import defaultdict

n = int(input())
moji = []

count = 0
d = defaultdict(int)
for i in range(n):
    s = sorted(input())
    d["".join(s)] += 1

for i in d.values():
    count += i * (i - 1) // 2

print(count)


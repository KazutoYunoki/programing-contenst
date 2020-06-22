n = int(input())
a = list(map(int, input().split()))

q = int(input())
int_list = [list(map(int, input().split())) for _ in range(q)]
total = 0

# 数字の個数を保存しておくリスト
number = [0] * 100005
for e in a:
    number[e] += 1
    total += e

for i in range(q):

    total -= int_list[i][0] * number[int_list[i][0]]
    total -= int_list[i][1] * number[int_list[i][1]]



    number[int_list[i][1]] += number[int_list[i][0]]
    number[int_list[i][0]] = 0

    total += int_list[i][0] * number[int_list[i][0]]
    total += int_list[i][1] * number[int_list[i][1]]

    print(total)


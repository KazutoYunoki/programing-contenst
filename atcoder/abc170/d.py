
def main():

    MAX_VALUE = 10**6 + 5

    n = int(input())
    a = list(map(int, input().split()))

    cnt = [0] * MAX_VALUE

    ans = 0

    for x in a:

        if cnt[x] != 0:
            cnt[x] = 2
            continue

        for i in range(x, MAX_VALUE, x):
            cnt[i]+=1

    for x in a:
        if cnt[x] == 1:
            ans += 1 

    print(ans)


if __name__ == "__main__":
    main()

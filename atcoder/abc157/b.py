def main():
    a = [list(map(int, input().split())) for _ in range(3)]

    N = int(input())

    # b = [int(input()) for _ in range(N)]

    result = [[False for i in range(3)] for j in range(3)]

    for i in range(N):
        b = int(input())
        for j in range(3):
            for k in range(3):
                if b == a[j][k]:
                    result[j][k] = True

    ans = "No"

    for i in range(3):
        if result[i][0] and result[i][1] and result[i][2] is True:
            ans = "Yes"

    for i in range(3):
        if result[0][i] and result[1][i] and result[2][i] is True:
            ans = "Yes"

    if result[0][0] and result[1][1] and result[2][2] is True:
        ans = "Yes"

    if result[2][0] and result[1][1] and result[0][2] is True:
        ans = "Yes"

    print(ans)


if __name__ == "__main__":
    main()

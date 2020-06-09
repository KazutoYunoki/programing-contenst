def main():
    N = int(input())
    A = list(map(int, input().split()))

    re = []

    for i in range(N):
        re.insert(A[i] - 1, i + 1)
        print(re)

    print(*re)


if __name__ == "__main__":
    main()

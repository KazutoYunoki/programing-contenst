def main():
    N, K, M = map(int, input().split())
    A = list(map(int, input().split()))

    sum = 0

    for e in A:
        sum += e

    x = N * M - sum
    if x <= 0:
        x = 0
    elif x > K:
        x = -1

    print(x)


if __name__ == "__main__":
    main()
